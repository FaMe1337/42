/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:30:20 by famendes          #+#    #+#             */
/*   Updated: 2024/04/24 20:11:42 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{	
	t_list	*list;
	t_list	*node;
	
	if(!lst)
		return (NULL);
	list = NULL;
	while (lst)
	{
		if (f)
			node = ft_lstnew(f(lst->content));
		else
			node = ft_lstnew(lst->content);
		if(!node)
		{	
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
