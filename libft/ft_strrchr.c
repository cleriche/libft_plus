/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:08:38 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/13 10:31:06 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*int   main(void)
{
        const char      str[] = "Je suis un robot 42";
        char    *result;

        printf("str = %s\n", str);

        result = ft_strrchr(str, 'n');

        if (result != NULL)
                printf("result = %c\n", *result);
        else
                printf("NULL\n");
        return(0);
}*/
