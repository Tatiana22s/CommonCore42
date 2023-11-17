/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatianasilva <tatianasilva@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:30:18 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/02 17:07:56 by tatianasilv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc) and returns a newstring, which 
is the result of the concatenation of ’s1’ and ’s2’.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
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
