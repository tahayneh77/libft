/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:40:01 by username          #+#    #+#             */
/*   Updated: 2026/10/04 17:39:26 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char unsigned	*str;
	unsigned int	i;

	str = ((char unsigned *)s);
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "Hello";

	ft_memset(str, 'X', 3);
	printf("%s\n", str);
	return (0);
}*/
