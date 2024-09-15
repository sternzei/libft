/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:47:53 by ezeper            #+#    #+#             */
/*   Updated: 2024/03/21 00:44:46 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	s;

	s = ft_strlen(s1) + 1;
	dst = malloc(s);
	if (dst == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		ft_memcpy(dst, s1, s);
	}
	return (dst);
}
