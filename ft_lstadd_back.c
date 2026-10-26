/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:16:38 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 17:37:46 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int	main(void)
{
	t_list	*lst;
	t_list	*node;

	lst = ft_lstnew("Hello");
	node = ft_lstnew("World");

	ft_lstadd_back(&lst, node);

	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);

	return (0);
}*/
