/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:58:24 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/12/01 17:04:03 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);

void	parse_arg(char spec, va_list ap, int long *count);

void	print_char(char c, int long *count);
void	print_charup(char c, int long *count);
void	print_str(char *s, int long *count);

void	print_nbr(long int n, int long *count);
void	print_hexa(unsigned long int n, int long *count);
void	print_hexaup(unsigned long int n, int long *count);
void	print_address(unsigned long int n, int long *count);

#endif
