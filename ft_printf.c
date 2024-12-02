/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 22:38:20 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/12/01 17:00:04 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_arg(char spec, va_list ap, int long *count)
{
	if (spec == 'c')
		print_char(va_arg(ap, int), count);
	else if (spec == 's')
		print_str(va_arg(ap, char *), count);
	else if (spec == 'd' || spec == 'i')
		print_nbr(va_arg(ap, int), count);
	else if (spec == 'u')
		print_nbr(va_arg(ap, unsigned int), count);
	else if (spec == 'x')
		print_hexa(va_arg(ap, unsigned int), count);
	else if (spec == 'X')
		print_hexaup(va_arg(ap, unsigned int), count);
	else if (spec == 'p')
		print_address(va_arg(ap, unsigned long int), count);
	else if (spec == '%')
		print_char('%', count);
}

int	ft_printf(const char *s, ...)
{
	long int	count;
	va_list		ap;

	va_start(ap, s);
	count = 0;
	if (!s)
		return (count);
	while (*s)
	{
		if (*s == '%')
			parse_arg(*++s, ap, &count);
		else
			print_char(*s, &count);
		s++;
	}
	va_end(ap);
	return (count);
}
