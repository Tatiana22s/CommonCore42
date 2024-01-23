/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatianasilva <tatianasilva@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:12:57 by tatianasilv       #+#    #+#             */
/*   Updated: 2024/01/23 00:13:42 by tatianasilv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "get_next_line_utils.c"
#include "get_next_line.c"

int main(void)
{
        int fd;
		int fd2;
        char *line;

        fd = open("teste.txt", O_RDONLY);
		fd2 = open("teste2.txt", O_RDONLY);
        while (fd)
        {
				line = get_next_line(fd);
                if (line == NULL)
                        break ;
                printf("%s", line);
                free (line);
		}
		printf("\nteste.txt- %d\n", fd);
		  while (fd2)
        {
				line = get_next_line(fd2);
                if (line == NULL)
                        break ;
                printf("%s", line);
				free(line);
        }
		printf("\nteste2.txt- %d\n", fd2);
        return (0);
}


/*
int main(void)
{
        int fd;
		int fd2;
        char *line;

		printf("Tentando abrir o arquivo 'teste.txt' para leitura\n");

		fd = open("teste.txt", O_RDONLY);
		if (fd < 0)
		{
			printf("Erro");
		}
  		 else
  		 {
  		    printf("Arquivo - %d - aberto - \n", fd);
  		 }
		fd2 = open("teste2.txt", O_RDONLY);
		if (fd2 < 0)
		{
			printf("Erro");
		}
  		 else
  		 {
  		    printf("Arquivo - %d - aberto - \n", fd2);
  		 }
 		close (fd);
		close (fd2);
}
*/
