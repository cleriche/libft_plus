/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:29:42 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/13 15:33:12 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*array;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	array = malloc(s1_len + s2_len + 1);
	if (!array)
		return (NULL);
	ft_strlcpy(array, s1, s1_len + 1);
	ft_strlcat(array, s2, s1_len + s2_len + 1);
	if (!array)
		return (NULL);
	return (array);
}
