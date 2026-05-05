/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:43:28 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/05 19:08:26 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	lst_size;
	t_list	*new_lst;
	t_list	*node;
	void	*new_content;
	
	if (!lst || !f || !del)
		return (NULL);
	node = NULL;
	new_lst = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		node = ft_lstnew(new_content);
		if (node == NULL || new_content == NULL)
		{
			ft_lstclear(&new_lst, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
