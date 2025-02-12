/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:36:51 by cleriche          #+#    #+#             */
/*   Updated: 2024/12/10 10:05:43 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_arg(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_base(va_arg(ap, int), 10, 1);
	else if (specifier == 'x')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 16, 0);
	else if (specifier == 'X')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 16, 1);
	else if (specifier == 'u')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 10, 1);
	else if (specifier == 'p')
		count += ft_putnbr_p(va_arg(ap, unsigned long), 16);
	else if (specifier == '%')
		count += write (1, "%", 1);
	else
		count += write (1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			count += check_arg(*format, ap);
		}
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
