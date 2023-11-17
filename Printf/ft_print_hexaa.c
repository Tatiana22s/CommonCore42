/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexaa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:28:15 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/14 11:25:29 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexaa(unsigned int n, int j)
{
	if (n >= 16)
	{
		j = ft_print_hexaa(n / 16, j);
	}
	j = ft_print_char("0123456789ABCDEF"[n % 16], j);
	return (j);
}
