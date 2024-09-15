/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:47:32 by ezeper            #+#    #+#             */
/*   Updated: 2024/03/27 16:06:02 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;
	size_t			alloc_size;

	alloc_size = count * size;
	if (size != 0 && (alloc_size / size) != count)
		return (NULL);
	tmp = malloc(alloc_size);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < alloc_size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
