/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:38:16 by marvin            #+#    #+#             */
/*   Updated: 2023/10/12 15:53:32 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	dsize;
	size_t	ssize;

	dsize = ft_strlen(dst);
	ssize = ft_strlen(src);
	i = dsize;
	j = 0;
	if (size <= dsize)
		return (size + ssize);
	while (src[j] && (i + 1 < size))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dsize + ssize);
}
