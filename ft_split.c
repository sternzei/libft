/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeper <ezeper@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:20:19 by ezeper            #+#    #+#             */
/*   Updated: 2024/03/27 17:47:13 by ezeper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_malloc(char **wrds, int pos, int t)
{
	int	i;

	i = 0;
	wrds[pos] = malloc(t);
	if (NULL == wrds[pos])
	{
		while (i < pos)
			free(wrds[i++]);
		free(wrds);
		return (1);
	}
	return (0);
}

static int	countwrds(char *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s == c)
		{
			word = 0;
		}
		else if (!word)
		{
			word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int	fillwords(char *s, char **wrd, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			if (w_malloc(wrd, i, len + 1))
				return (1);
			ft_strlcpy(wrd[i], s - len, len + 1);
			++i;
		}
	}
	wrd[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	sizewrd;
	char	**wrds;

	if (s == NULL)
		return (NULL);
	sizewrd = countwrds((char *)s, c);
	wrds = (char **)malloc((sizewrd + 1) * sizeof(char *));
	if (wrds == NULL)
		return (NULL);
	if (fillwords((char *)s, wrds, c))
	{
		return (NULL);
	}
	return (wrds);
}
