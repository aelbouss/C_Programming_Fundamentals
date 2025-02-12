#include "pipex.h"
/* ./pipex infile "grep a1" "wc -w" outfile */
/*    0      1       2         3      4*/

char	*search_for_path(char **envp)
{
	char	*env_arg ;
	char	*path;
	int	(i), (j);

	i = 0;
	path = "PATH=/";
	env_arg = envp[i] ;
	while (env_arg)
	{
		if (env_arg[0] == 'P')
		{
			j = 0;
			while (j <= 5)
			{
			   if (env_arg[j] != path[j])
				break;
			   j++;
			}
			if (path[j] == '\0')
				return (env_arg);
		}
		i++;
		env_arg = envp[i];	
	}
	return (NULL);	
}

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char*)malloc(
		sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;
	return (str);
}

char	*extract_path(char **e_path,char *cmd)
{
	char	*path;
	int	i;

	i = 0;
	while (e_path[i])
	{
		path = ft_strjoin(e_path[i], "/");
		path = ft_strjoin(path, cmd);
		if (access(path, X_OK) == 0)
			return (path);
		i++;
	}
	return (NULL);
}

int	main(int argc, char *argv[], char *envp[])
{
	int	pid;
	int	pid2;
	int	inoutfd;
	int	fd[2];
	char	*i_p;
	char	**paths;
	char	**res;
	char	**res1;
	int	i;

	res = ft_split(argv[2], 32);
	res1 = ft_split(argv[3], 32);
	pipe(fd);
	pid = fork();
	if (pid == 0)
	{
		inoutfd = open(argv[1], O_RDONLY);
		dup2(inoutfd, 0);
		dup2(fd[1], STDOUT_FILENO);
		i_p = search_for_path(envp);
		paths = ft_split(i_p, ':');
		i_p = extract_path(paths, res[0]);
		execve(i_p, res, NULL);
	}
	else
	{
		wait(NULL);
		pid2 = fork();
		if (pid2 == 0)
		{
			int	ofd;
			close(fd[1]);
			ofd = open(argv[4], O_WRONLY);
			dup2(fd[0], 0);
			dup2(ofd, STDOUT_FILENO);
			i_p = search_for_path(envp);
			paths = ft_split(i_p, ':');
			i_p = extract_path(paths, res1[0]);
			execve(i_p, res1, NULL); 		
		}
	}
	return (0);
}
