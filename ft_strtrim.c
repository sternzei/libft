/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:44:15 by ezeper            #+#    #+#             */
/*   Updated: 2024/03/27 17:02:02 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!*set || !*s1)
	{
		return (ft_strdup(s1));
	}
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end]) != NULL)
	{
		end--;
	}
	res = ft_substr(s1, start, end - start + 1);
	return (res);
}
