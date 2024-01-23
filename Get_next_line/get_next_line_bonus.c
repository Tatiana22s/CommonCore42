/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:17:33 by tatperei          #+#    #+#             */
/*   Updated: 2023/12/09 16:11:43 by tatianasilva     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*readfile(int fd, char *frase)
{
	char	*buffer;
	int		read_num;

	if (!frase)
		frase = ft_calloc(1, 1);
	read_num = 1;
	buffer = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	while (read_num > 0)
	{
		read_num = read(fd, buffer, BUFFER_SIZE);
		if (read_num == -1)
			break ;
		buffer[read_num] = '\0';
		frase = ft_strjoin(frase, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	if (read_num == -1 || !*frase)
		return (free(frase), NULL);
	return (frase);
}

char	*readline(char *frase)
{
	char	*tmp;
	int		i;

	i = 0;
	if (!frase[i])
		return (NULL);
	while (frase[i] != '\n' && frase[i])
		i++;
	tmp = ft_calloc(sizeof(char), i + 2);
	i = 0;
	while (frase[i] != '\n' && frase[i])
	{
		tmp[i] = frase[i];
		i++;
	}
	if (frase[i] == '\n')
		tmp[i] = '\n';
	return (tmp);
}

char	*readnext(char *frase)
{
	char	*tmp;
	int		count;
	int		i;

	count = 0;
	while (frase[count] != '\n' && frase[count])
		count++;
	if (!frase[count])
		return (free(frase), NULL);
	tmp = ft_calloc(sizeof(char), ft_strlen(frase) - count);
	count++;
	i = 0;
	while (frase[count])
	{
		tmp[i] = frase[count];
		i++;
		count++;
	}
	tmp[i] = '\0';
	free(frase);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*content[FOPEN_MAX];
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FOPEN_MAX)
		return (NULL);
	content[fd] = readfile(fd, content[fd]);
	if (!content[fd])
		return (NULL);
	buffer = readline(content[fd]);
	content[fd] = readnext(content[fd]);
	return (buffer);
}
