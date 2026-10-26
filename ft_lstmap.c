/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:51:02 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 16:41:45 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res_list;
	t_list	*n_node;
	void	*content;

	res_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		n_node = ft_lstnew(content);
		if (!n_node)
		{
			del(content);
			ft_lstclear(&res_list, del);
			return (NULL);
		}
		ft_lstadd_back(&res_list, n_node);
		lst = lst->next;
	}
	return (res_list);
}
