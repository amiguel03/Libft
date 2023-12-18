/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:28:49 by amiguel-          #+#    #+#             */
/*   Updated: 2023/10/02 13:17:20 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	if (*needle == '\0')
		return ((char *)hay);
	i = 0;
	while (hay[i] != '\0' && i < len)
	{
		if (hay[i] == needle[0])
		{
			j = 0;
			while (needle[j] && hay[i + j] && i + j < len
				&& hay[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)hay + i);
		}
		i++;
	}
	return (0);
}
