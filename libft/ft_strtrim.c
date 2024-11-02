/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouss <aelbouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:20:24 by aelbouss          #+#    #+#             */
/*   Updated: 2024/11/02 18:34:51 by aelbouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s || start > ft_strlen(s))
		return (NULL);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start++];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	find_caracter( char c, char const *soc)
{
	int	i;

	i = 0 ;
	while (soc[i])
	{
		if (c == soc[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && find_caracter(s1[i], set))
		i++;
	if (s1[i] == '\0')
	{
		ptr = malloc (1 * sizeof(char));
		ptr [0] = '\0';
		return (ptr);
	}
	i = 0;
	while (s1[i] && find_caracter(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && find_caracter(s1[j], set))
		j--;
	ptr = ft_substr(s1, i, j + 1 - i);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
