/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouss <aelbouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:16:35 by aelbouss          #+#    #+#             */
/*   Updated: 2024/11/03 17:24:11 by aelbouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totallen;
	size_t	i;
	char	*ptr;

	if (!s1[0] || !s2[0])
		return (NULL);
	totallen = (ft_strlen(s1) + ft_strlen(s2) + 1);
	ptr = malloc(totallen * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		ptr[i++] = *s1++;
	}
	while (*s2)
	{
		ptr[i++] = *s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}
