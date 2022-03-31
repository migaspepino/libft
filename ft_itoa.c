/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:31:28 by mimarque          #+#    #+#             */
/*   Updated: 2022/03/20 20:06:48 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define INT_DIGITS 19

/**
*gives int size
static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0 || n == 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == INT_MIN)
		return (res = ft_strdup("-2147483648"));
	len = ft_intlen(n);
	if (n < 0)
		n = -n;
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	else
		res[0] = '-';
	while (n)
	{
		res[--len] = '0' + n % 10;
		n /= 10;
	}
	return (res);
}
*/

char *ft_itoa(int n)
{
	static char buf[INT_DIGITS + 2];
	char *p = buf + INT_DIGITS + 1;
	if (n >= 0)
	{
		*--p = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--p = '0' + (n % 10);
			n /= 10;
		}
		return p;
	}
	else
	{
		while (n != 0)
		{
			*--p = '0' - (n % 10);
			n /= 10;
		}
		*--p = '-';
	}
	return p;
}
