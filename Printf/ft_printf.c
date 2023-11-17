/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:23:35 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/14 11:27:17 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format_type(const char *format, va_list ptr, int i, int j)
{
	if (format[i] == 'c')
		j = ft_print_char(va_arg(ptr, int), j);
	else if (format[i] == 's')
		j = ft_print_str(va_arg(ptr, char *), j);
	else if (format[i] == 'd' || format[i] == 'i')
		j = ft_print_nbr(va_arg(ptr, int), j);
	else if (format[i] == 'u')
		j = ft_print_unsigned(va_arg(ptr, unsigned int), j);
	else if (format[i] == 'x' )
		j = ft_print_hexa(va_arg(ptr, unsigned int), j);
	else if (format[i] == 'X')
		j = ft_print_hexaa(va_arg(ptr, unsigned int), j);
	else if (format[i] == 'p')
		j = ft_print_ptr(va_arg(ptr, void *), j);
	else if (format[i] == '%')
		j = ft_print_char('%', j);
	return (j);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	ptr;

	va_start(ptr, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count = ft_format_type(format, ptr, ++i, count);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(ptr);
	return (count);
}
/*
 #include <stdio.h>
 #include <limits.h>
 
int	main(void)
{
	int checkmy;
	int check;

	checkmy = 0;
	check = 0;
	//j = ft_printf("Eu gosto de batata");
	//j = ft_printf("%s", "Tatiana");
	checkmy = ft_printf("%p , %p", LONG_MIN, LONG_MAX);
	printf("\n%d\n", checkmy);
	check = printf("%p , %p", LONG_MIN, LONG_MAX);
	printf("\n%d\n", check);
	//checkmy = ft_printf("%i", -5);
	//checkmy = ft_printf("%%");
	//checkmy = ft_printf("%u", 2222);
	//checkmy = ft_printf("%p",);
	//checkmy = ft_printf("%x",);
	//checkmy = ft_printf("%X",);
} */