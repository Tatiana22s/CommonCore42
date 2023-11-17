/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatianasilva <tatianasilva@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:30:37 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/17 11:02:54 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc) and returns a copy of ’s1’with the characters 
specified in ’set’ removed from the beginning and the end of the string.*/

static size_t	charcmp(const char *s, char ch)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (ch == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;

	start = 0;
	len = ft_strlen(s1);
	while (charcmp(set, s1[start]))
		start++;
	if (start == len)
		return (ft_strdup(""));
	while (charcmp(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, start, len - start));
}
