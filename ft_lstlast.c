/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:06:05 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 17:38:20 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*int	main(void)
{
	t_list	*lst;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	lst = ft_lstnew("Hello");
	node2 = ft_lstnew("World");
	node3 = ft_lstnew("ola");

	lst->next = node2;
	node2->next = node3;

	last = ft_lstlast(lst);

	printf("%s\n", (char *)last->content);
}*/