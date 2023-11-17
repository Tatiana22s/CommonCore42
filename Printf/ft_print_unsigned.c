/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:28:19 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/14 11:25:33 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n, int j)
{
	if (n > 9)
	{
		j = ft_print_unsigned(n / 10, j);
	}
	j = ft_print_char(n % 10 + 48, j);
	return (j);
}
