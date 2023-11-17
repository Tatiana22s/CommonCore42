/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatianasilva <tatianasilva@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:57:19 by tatianasilv       #+#    #+#             */
/*   Updated: 2023/11/06 09:41:27 by tatianasilv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Deletes and frees the given node and every successor of that node, using
the function ’del’ and free. Finally, the pointer to the list must be set to
NULL.*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!*lst || !del)
		return ;
	ft_lstclear(&(*lst)->next, del);
	(del)((*lst)->content);
	free(*lst);
	*lst = NULL;
}
