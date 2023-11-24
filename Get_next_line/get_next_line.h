/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:38:09 by tatianasilv       #+#    #+#             */
/*   Updated: 2023/11/21 22:47:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER__SIZE
# define BUFFER_SIZE 5;
# endif


char	*get_next_line(int fd);

size_t	ft_strlen(char *str);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);



#endif
