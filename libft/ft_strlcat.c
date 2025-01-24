/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:59:40 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/05 15:26:42 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return ((size + src_len));
	i = 0;
	while (src[i] && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*int	main(void)
{
	char	dest[50] = "je suis un gentil";
	char	src[50] = "monsieur sympathique";

	printf("dest initial = %s\n", dest);
	printf("src initial = %s\n", src);

	unsigned int	result = ft_strlcat(dest, src, 48);

	printf("dest strlcat = %s\n", dest);
	printf("src strlcat = %s\n", src);
	printf("longueur = %d\n", result);

	return(0);
}*/
