/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:16:34 by ezeper            #+#    #+#             */
/*   Updated: 2024/03/21 00:46:56 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	b;
	size_t	s;

	b = 0;
	if (small[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[b] != '\0' && b < len)
	{
		s = 0;
		while (big[b + s] && small[s] && big[b + s] == small[s] && (b
				+ s) < len)
		{
			s++;
		}
		if (small[s] == '\0')
		{
			return ((char *)&big[b]);
		}
		b++;
	}
	return (NULL);
}
