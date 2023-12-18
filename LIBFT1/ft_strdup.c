/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:44:11 by amiguel-          #+#    #+#             */
/*   Updated: 2023/09/20 16:51:21 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		size;
	char	*memory;
	int		i;

	size = ft_strlen((char *) src);
	memory = (char *)malloc ((size +1) * sizeof(char));
	if (memory == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		memory[i] = src[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
