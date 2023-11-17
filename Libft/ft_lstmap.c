/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatianasilva <tatianasilva@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:58:22 by tatianasilv       #+#    #+#             */
/*   Updated: 2023/11/06 09:40:39 by tatianasilv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Itera a lista 'lst' e aplica a função 'f' no conteúdo de cada nó. Cria uma
nova lista resultante das sucessivas aplicações da função 'f'. A função'del'
é usada para excluir o conteúdo de um nó, se necessário. Retorna a nova lista
ou NULL se a alocação falhar.*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*newnode;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		newnode = ft_lstnew(tmp);
		if (!newnode)
		{
			del(tmp);
			ft_lstclear(&list, (*del));
			return (list);
		}
		ft_lstadd_back(&list, newnode);
		lst = lst->next;
	}
	return (list);
}
