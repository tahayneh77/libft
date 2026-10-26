/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:50:35 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 17:41:06 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (n[0] == '\0')
		return ((char *)s);
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		while (s[i + j] == n[j] && n[j] != '\0' && i + j < len)
		{
			j++;
		}
		if (n[j] == '\0')
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	s[] = "hello world";
	char	n[] = "world";

	printf("%s", ft_strnstr(s, n, 11));
	return (0);
}*/