/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:29:45 by amiguel-          #+#    #+#             */
/*   Updated: 2023/09/21 11:44:23 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t tam)
{
	void	*result;

	result = malloc(n * tam);
	if (result == 0)
		return (0);
	ft_bzero(result, n * tam);
	return (result);
}
