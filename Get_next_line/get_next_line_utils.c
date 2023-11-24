/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:38:18 by tatianasilv       #+#    #+#             */
/*   Updated: 2023/11/21 22:45:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *str;

	i = 0;
	str = (void *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	tmp = malloc(nmemb * size);
	if (tmp != NULL)
		ft_memset(tmp, '\0', nmemb * size);
	return (tmp);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = (char *)mallloc(sizeof(char) * (len1 + len2) + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] && i < len1 + len2)
	{
		newstr[len1 + i] = s2[i];
		i++;
	}
	newstr[len1 + i] = '\0';
	return (newstr);
}
