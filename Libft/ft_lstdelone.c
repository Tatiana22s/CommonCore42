/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatperei <tatperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:56:36 by tatianasilv       #+#    #+#             */
/*   Updated: 2023/11/03 11:47:17 by tatperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Takes as a parameter a node and frees the memory of the node’s content 
using the function ’del’ given as a parameter and free the node. The memory 
of ’next’ must not be freed.*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst -> content);
	free(lst);
	lst = NULL;
}
