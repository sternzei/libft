/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 01:18:52 by ezeper            #+#    #+#             */
/*   Updated: 2024/03/27 21:14:35 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		target;
	unsigned const char	*array;
	size_t				i;

	target = c;
	array = s;
	i = 0;
	while (i < n)
	{
		if (array[i] == target)
		{
			return ((void *)&array[i]);
		}
		i++;
	}
	return (0);
}
