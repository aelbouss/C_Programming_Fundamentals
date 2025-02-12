#include "test.h"

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
		if (access(path, F_OK) == 0)
			return (path);
		i++;
	}
	return (NULL);
}

int	main(int ac, char *av[], char *envp[])
{
	char	*str;
	char	**path;
	char	*final;
	int	i;
	str = search_for_path(envp);
	str = str + 5;
	path = ft_split(str, ':');
	final = extract_path(path, av[1]);
	printf("%s",final);
	
	/*i = 0;
	while (path[i])
	{
		printf("%s\n",path[i]);
		i++;
	}
	*/

	return (0);
}
