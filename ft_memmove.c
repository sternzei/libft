/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:00:23 by ezeper            #+#    #+#             */
/*   Updated: 2024/03/30 00:06:44 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*c_dst;
	const char	*c_src;
	size_t		i;

	c_dst = (char *)dst;
	c_src = (const char *)src;
	if (c_dst == NULL && c_src == NULL)
		return (NULL);
	if (c_dst > c_src)
	{
		while (len-- > 0)
			c_dst[len] = c_src[len];
	}
	else if (c_dst < c_src)
	{
		i = 0;
		while (i++ < len)
			c_dst[i - 1] = c_src[i - 1];
	}
	return (dst);
}
