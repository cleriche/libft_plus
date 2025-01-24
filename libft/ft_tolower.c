/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:32:56 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/07 12:46:07 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/*int	main(void)
{
	char	str[] = "JE suIS 42";
	int	i = 0;

	printf("str initial = %s\n", str);
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	printf("str modifie = %s\n", str);
	return (0);
}*/
