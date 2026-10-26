/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:58:14 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 17:38:11 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hello");
	ft_lstadd_back(&lst, ft_lstnew("World"));
	ft_lstiter(lst, print_content);
	return (0);
}*/
