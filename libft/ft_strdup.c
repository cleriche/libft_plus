/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:27:42 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/13 10:28:53 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		s_len;
	const char	*array;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	array = (char *)ft_calloc(s_len + 1, sizeof(char));
	if (array == NULL)
		return (NULL);
	ft_strlcpy((char *)array, s, s_len + 1);
	return ((char *)array);
}
