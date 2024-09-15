/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:07:08 by ezeper            #+#    #+#             */
/*   Updated: 2024/03/25 22:49:37 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		r;
	int		src;
	char	*res;

	r = 0;
	src = 0;
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (res == 0)
		return (NULL);
	while (s1[src] != '\0')
	{
		res[r] = s1[src];
		r++;
		src++;
	}
	src = 0;
	while (s2[src] != '\0')
	{
		res[r] = s2[src];
		r++;
		src++;
	}
	res[r] = '\0';
	return (res);
}
