/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:01:26 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/06 23:36:34 by tatianasilva     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (void *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		else
			i++;
	}
	return (NULL);
}
