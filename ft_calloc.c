/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 17:56:30 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 18:27:06 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	if (size > (size_t) - 1 / nmemb)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

/*int	main(void)
{
	int	i;
	int	*p;

	p = ft_calloc(5, sizeof(int));
	i = 0;
	while (i < 5)
	{
		printf("%d", p[i]);
		i++;
	}
	free(p);
	return (0);
}*/
