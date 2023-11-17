/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatianasilva <tatianasilva@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:21:17 by tatperei          #+#    #+#             */
/*   Updated: 2023/10/27 15:40:37 by tatianasilv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates (with malloc) and returns a substring
from the string ’s’.The substring begins at index 
’start’ and is of maximum size ’len’.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	if (start > ft_strlen(s))
		len = 0;
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(&s[start]);
	newstr = (char *)malloc(sizeof(char) * len + 1);
	if (!newstr)
		return (NULL);
	j = 0;
	i = 0;
	while (len > i && s[start + i])
	{
		newstr[j] = s[start + i];
		i++;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
