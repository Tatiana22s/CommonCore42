/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:28:24 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/14 11:25:30 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n, int j)
{
	if (n == -2147483648)
	{
		j = ft_print_str("-2147483648", j);
		return (j);
	}
	else if (n < 0)
	{
		j = ft_print_char('-', j);
		n *= -1;
	}
	if (n > 9)
	{
		j = ft_print_nbr(n / 10, j);
	}
	j = ft_print_char(n % 10 + '0', j);
	return (j);
}
