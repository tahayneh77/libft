/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 18:28:28 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 17:39:17 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src)
		return (dest);
	if ((unsigned char *)dest < (unsigned char *)src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	str[] = "hello world";

	ft_memmove(str + 6, str, 5);
	printf("%s", str);
	return (0);
}*/