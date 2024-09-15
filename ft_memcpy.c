/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:04:53 by ezeper            #+#    #+#             */
/*   Updated: 2024/04/22 16:56:57 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*dbf;
	const unsigned char	*sbf;

	if (src == NULL && dst == NULL)
		return (NULL);
	dbf = (unsigned char *)dst;
	sbf = (const unsigned char *)src;
	while (len--)
	{
		*dbf++ = *sbf++;
	}
	return (dst);
}
