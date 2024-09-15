/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:52:41 by ezeper            #+#    #+#             */
/*   Updated: 2024/04/16 16:11:18 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	callen(int num)
{
	long	len;

	if (num == 0)
	{
		return (0);
	}
	len = 0;
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		l;

	l = callen(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	r = (char *)malloc((l + 1) * sizeof(char));
	if (!r)
		return (NULL);
	r[l--] = '\0';
	if (n < 0)
		n = -1 * n;
	r[0] = '-';
	while (n > 0)
	{
		r[l] = (n % 10) + '0';
		n = n / 10;
		l--;
	}
	return (r);
}
