/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:39:16 by marvin            #+#    #+#             */
/*   Updated: 2023/09/27 20:39:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;
	void	*set;

	if (!lst || !f || !del)
		return (0);
	ret = 0;
	while (lst)
	{
		set = f(lst->content);
		tmp = ft_lstnew(set);
		if (!tmp)
		{
			del(set);
			ft_lstclear(&ret, del);
			return (ret);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst->next;
	}
	return (ret);
}
