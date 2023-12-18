/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:53:02 by amiguel-          #+#    #+#             */
/*   Updated: 2023/09/21 13:14:09 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sing;

	i = 0;
	num = 0;
	sing = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str [i] == '+')
	{
		if (str[i] == '-')
			sing = -1;
		i++;
	}
	while (ft_isdigit((int) str[i]) != 0)
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sing);
}
