#ifndef PIPEX_H
#define PIPEX_H

//headers section
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdlib.h>

//prototypes sectipn 
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(char const *str);
char	*extract_path(char **e_path,char *cmd);
#endif 
