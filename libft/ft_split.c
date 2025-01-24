/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:09:04 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/21 11:14:59 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	safe_malloc(char **array_v, int position, size_t buffer)
{
	int	i;

	i = 0;
	array_v[position] = malloc(buffer);
	if (array_v[position] == NULL)
	{
		while (i < position)
			free (array_v[i++]);
		free (array_v);
		return (1);
	}
	return (0);
}

static size_t	count_tokens(char const *s, char c)
{
	size_t	count;
	size_t	inside;

	count = 0;
	inside = 0;
	while (*s)
	{
		if (*s != c && !inside)
		{
			count++;
			inside = 1;
		}
		else if (*s == c)
		{
			inside = 0;
		}
		s++;
	}
	return (count);
}

static int	fill(char **array_v, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c)
			s++;
		while (s[len] && s[len] != c)
			len++;
		if (len > 0)
		{
			if (safe_malloc(array_v, i, len + 1))
				return (1);
			ft_strlcpy(array_v[i], s, len + 1);
			i++;
			s += len;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens;
	char	**array_v;

	if (!s)
		return (NULL);
	tokens = count_tokens(s, c);
	array_v = ((char **)malloc(sizeof(char *) * (tokens + 1)));
	if (!array_v)
		return (NULL);
	array_v[tokens] = NULL;
	if (fill(array_v, s, c))
		return (NULL);
	return (array_v);
}
