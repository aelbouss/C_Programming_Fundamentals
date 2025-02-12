#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdlib.h>
char	**ft_split(char const *s, char c);
char	*search_for_path(char **envp);
char	*ft_strjoin(char const *s1, char const *s2);
size_t 	ft_strlen(char const *str);
#endif
