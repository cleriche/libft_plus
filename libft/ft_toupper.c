/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:49:33 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/07 12:47:39 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/*int	main(void)
{
	char	str[] = "je suis";
	int	i = 0;

	printf("str initial = %s\n", str);

	while (str[i])
        {
                str[i] = ft_toupper(str[i]);
                i++;
        }
                
	printf("str modif = %s\n", str);
	return (0);
}*/
