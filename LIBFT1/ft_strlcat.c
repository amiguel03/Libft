/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:28:34 by amiguel-          #+#    #+#             */
/*   Updated: 2023/10/02 11:43:18 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;
	size_t	rest;

	rest = 0;
	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size > dest_size)
		rest = src_size + dest_size;
	else
		rest = src_size + (int)size;
	while (src[i] && (dest_size +1) < size)
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (rest);
}
