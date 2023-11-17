/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:20:24 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/14 11:25:38 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h> 
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_print_char(int c, int j);
int	ft_print_str(char *s, int j);

int	ft_print_nbr(int n, int j);
int	ft_print_unsigned(unsigned int n, int j);

int	ft_print_hexa(unsigned int n, int j);
int	ft_print_hexaa(unsigned int n, int j);

int	ft_print_ptr(void *p, int j);

#endif
