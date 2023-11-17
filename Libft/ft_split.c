/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatianasilva <tatianasilva@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:45:40 by tatianasilv       #+#    #+#             */
/*   Updated: 2023/11/17 11:01:21 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates (with malloc) and returns an arrayof strings obtained 
by splitting ’s’ using the character ’c’ as a delimiter. The array 
must end with a NULL pointer. Return the array of new strings 
resulting from the split. NULL if the allocation fails.*/

static size_t	countwords(char const *s, char c)
{
	size_t	wcount;
	size_t	i;

	wcount = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			wcount++;
			while (s[i] && s[i] != c)
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (wcount);
}

static char	*my_substr(char const *s, char c)
{
	char	*new_s;
	size_t	i;
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	new_s = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (len > i)
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

static void	free_array(char **array, size_t i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
}

static char	**allocate(char const *s, char c, char **array, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			array[i] = my_substr(s, c);
			if (!array[i])
			{
				free_array(array, i);
				return (NULL);
			}
		}
		while (*s && *s != c)
			s++;
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**array;

	if (!s)
		return (NULL);
	words = countwords(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = allocate(s, c, array, words);
	return (array);
}
