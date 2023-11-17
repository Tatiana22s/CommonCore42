/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:28:33 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/14 11:25:28 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int n, int j)
{
	if (n >= 16)
	{
		j = ft_print_hexa(n / 16, j);
	}
	j = ft_print_char("0123456789abcdef"[n % 16], j);
	return (j);
}
