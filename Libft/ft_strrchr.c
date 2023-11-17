/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatianasilva <tatianasilva@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:14:59 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/06 23:43:44 by tatianasilv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Devolve o endereço da ultima posição em que ocorre o caracter 'c' 
na string 's'. Caso nao exista devolve NULL*/

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
