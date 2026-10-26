/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 19:33:57 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 16:05:04 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int	main(void)
{
	t_list	*lst;
	t_list	*second;

	lst = ft_lstnew(ft_strdup("Hello"));
	second = ft_lstnew(ft_strdup("World"));
	lst->next = second;
	second = lst->next;
	ft_lstdelone(lst, free);
	lst = second;
	printf("%s\n", (char *)lst->content);
	ft_lstdelone(lst, free);
	return (0);
}*/
