/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:59:12 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 17:38:44 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hello");
	ft_lstadd_back(&lst, ft_lstnew("World"));
	ft_lstadd_back(&lst, ft_lstnew("42"));
	printf("%u\n", ft_lstsize(lst));
	return (0);
}*/
