/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:02:45 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/21 14:48:17 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_numlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str_n;
	long	nb;

	nb = n;
	len = ft_numlen(n);
	str_n = NULL;
	str_n = malloc (sizeof(char) * (len + 1));
	if (!str_n)
		return (NULL);
	str_n[len] = '\0';
	if (nb == 0)
		str_n[0] = '0';
	if (nb < 0)
	{
		str_n[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str_n[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str_n);
}
