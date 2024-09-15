/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 01:05:39 by ezeper            #+#    #+#             */
/*   Updated: 2024/03/21 00:45:00 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[b] != '\0' && (i + b + 1) < size)
	{
		dst[i + b] = src[b];
		b++;
	}
	if (i < size)
	{
		dst[i + b] = '\0';
	}
	return (i + ft_strlen(src));
}
