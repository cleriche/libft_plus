/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:31:05 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/21 12:44:53 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, s++, 1);
	}
}
