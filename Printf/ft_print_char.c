/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:25:35 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/14 11:25:26 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c, int j)
{
	if (c == 0)
	{
		write(1, "", 1);
		j++;
		return (j);
	}
	write(1, &c, 1);
	j++;
	return (j);
}
