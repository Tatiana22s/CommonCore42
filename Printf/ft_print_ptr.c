/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:28:27 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/14 11:27:35 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hexap(unsigned long long int n, int j)
{
	if (n >= 16)
	{
		j = ft_print_hexap(n / 16, j);
	}
	j = ft_print_char("0123456789abcdef"[n % 16], j);
	return (j);
}

int	ft_print_ptr(void *p, int j)
{
	unsigned long long int	pointer;

	if (!p)
		return (ft_print_str("(nil)", j));
	pointer = (unsigned long long int)p;
	j = ft_print_str("0x", j);
	j = ft_print_hexap(pointer, j);
	return (j);
}
