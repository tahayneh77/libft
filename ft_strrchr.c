/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 20:08:34 by username          #+#    #+#             */
/*   Updated: 2026/10/04 17:41:11 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + slen);
	while (slen > 0)
	{
		--slen;
		if (s[slen] == (char)c)
			return ((char *)s + slen);
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "hello world";

	printf("%s", ft_strrchr(str, 'l'));
	return (0);
}*/
