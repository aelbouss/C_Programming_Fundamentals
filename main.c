#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/*
char	*search_for_path(char *envp[])
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
			if (path[j + 1] == '\0')
				return (env_arg);
		}
		i++;
		env_arg = envp[i];	
	}
	return (NULL);	
}
*/
int	main()
{
	int	res;

	res = access("./lala", W_OK);
	if (res == 0)
		printf("the  file  exists\n");
	else
		printf("the  file doesn't exists\n");
}

