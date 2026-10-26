/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 19:45:34 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 16:24:29 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen || len == 0)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	s[] = "siwar124";

	printf("%s", ft_substr(s, 5, 100));
	return (0);
}*/
