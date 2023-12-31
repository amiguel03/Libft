/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:03 by amiguel-          #+#    #+#             */
/*   Updated: 2023/09/20 17:26:13 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	char			*p;
	size_t			i;

	p = (char *) ptr;
	i = 0;
	while (i < num)
	{
		p[i] = '\0';
		i++;
	}
}
