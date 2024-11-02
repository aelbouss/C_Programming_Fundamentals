/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouss <aelbouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:20:11 by aelbouss          #+#    #+#             */
/*   Updated: 2024/11/02 18:13:01 by aelbouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp( const char *first, const char *second, size_t length)
{
	size_t	i;

	if (!first || !second || length == 0)
		return (0);
	i = 0;
	while ((i < length) && (first[i] && second[i]))
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	return (first[i] - second[i]);
}
