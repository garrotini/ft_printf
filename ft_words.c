/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:00:40 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/12/05 15:55:12 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(char c, int long *count)
{
	*count += write(1, &c, 1);
}

void	print_str(char *s, int long *count)
{
	if (!s)
	{
		print_str("(null)", count);
		return ;
	}
	while (*s)
		print_char(*s++, count);
}
