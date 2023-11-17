/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:35:31 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/14 11:25:32 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s, int j)
{
	if (!s)
		return (ft_print_str("(null)", j));
	while (*s)
	{
		write(1, s, 1);
		s++;
		j++;
	}
	return (j);
}
