/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:36:58 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/27 17:29:54 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static t_list	*ft_lstnew(void *content)
{
	t_list	*new_struct;

	new_struct = (t_list *) malloc(sizeof(t_list));
	if (new_struct == NULL)
		return (NULL);
	new_struct->content = content;
	new_struct->next = NULL;
	return (new_struct);
}

static void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*(lst + 0) = new;
} */

int	ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/* #include <stdio.h>
int main ()
{
	t_list *lst;
	t_list *ptr_node1;
	t_list *ptr_node2;
	int lst_size;

	ptr_node1 = ft_lstnew("ola node 1");
	ptr_node2 = ft_lstnew("adeus node 2");

	lst = NULL;
	ft_lstadd_front(&lst, ptr_node2);
	ft_lstadd_front(&lst, ptr_node1);
	lst_size = ft_lstsize(lst);

	printf("%d\n", lst_size);
} */