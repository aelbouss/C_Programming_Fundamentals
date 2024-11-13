/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouss <aelbouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:20:07 by aelbouss          #+#    #+#             */
/*   Updated: 2024/11/13 02:39:17 by aelbouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cnt_word(char const*s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if ((i == 0 && s[i - 1] != c) || (s[i] == c))
			cnt++;
		i++;
	}
	return (cnt);
}

static size_t	cnt_str(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static	char	*ft_stringdup( char const *s, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0 ;
	ptr = (char *)malloc(len + 1 * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < len && s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static void	freearrayofptrs(char **ptr, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
		free(ptr[i++]);
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	wl;
	size_t	j;

	ptr = (char **)malloc((cnt_word(s, c) + 1) * sizeof(char *));
	if (ptr == NULL || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			wl = cnt_str(&s[i], c);
			ptr[j++] = ft_stringdup(&s[i], wl);
			if (ptr[j - 1] == NULL)
				freearrayofptrs(ptr, j - 1);
			i = i + wl;
		}
	}
	ptr[j] = NULL;
	return (ptr);
}
