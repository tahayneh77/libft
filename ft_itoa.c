/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:24:35 by oabuzaid          #+#    #+#             */
/*   Updated: 2026/10/04 16:12:12 by oabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	int		len;

	num = n;
	len = count(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
