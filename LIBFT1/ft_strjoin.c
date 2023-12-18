/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:28:30 by amiguel-          #+#    #+#             */
/*   Updated: 2023/09/27 13:12:42 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len_s1;
	size_t	len_s2;
	size_t	total_len;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_len = len_s1 + len_s2;
	dest = (char *)malloc(total_len + 1);
	if (!s1 || !s2)
		return (NULL);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, (char *)s1, total_len + 1);
	ft_strlcpy(dest + len_s1, (char *)s2, total_len + 1);
	dest[total_len] = '\0';
	return (dest);
}	
