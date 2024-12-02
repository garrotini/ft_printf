/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:01:17 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/12/01 17:05:54 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_nbr(long int n, int long *count)
{
	if (n < 0)
	{
		print_char('-', count);
		n *= -1;
	}
	if (n >= 10)
		print_nbr(n / 10, count);
	print_char(n % 10 + '0', count);
}

void	print_hexa(unsigned long int n, int long *count)
{
	if (n >= 16)
		print_hexa(n / 16, count);
	print_char("0123456789abcdef"[n % 16], count);
}

void	print_hexaup(unsigned long int n, int long *count)
{
	if (n >= 16)
		print_hexaup(n / 16, count);
	print_char("0123456789ABCDEF"[n % 16], count);
}

void	print_address(unsigned long int n, int long *count)
{
	if (!n)
		return (print_str("(nil)", count));
	print_str("0x", count);
	print_hexa(n, count);
}
