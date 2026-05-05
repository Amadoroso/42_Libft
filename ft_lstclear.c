/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 14:01:23 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/05 15:19:50 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* static	char *ft_content_creator(char *content_tofill)
{
	int	i;
	size_t len;
	char *result;
	
	len = 0;
	while (*(content_tofill + len) != 0)
		len++;
	result = (char *) malloc(sizeof(char) * (len + 1));
	i = 0;
	while (*content_tofill != 0)
	{
		*(result + i) = *content_tofill;
		content_tofill++;
		i++;
	}
	*(result + i) = 0;
	return (result);
}
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
static void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*traveler;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	traveler = *lst;
	while (traveler->next != NULL)
		traveler = traveler->next;
	traveler->next = new;
}
static t_list	*ft_lstnew(void *content)
{
	t_list	*new_struct;

	if (content == NULL)
		return (NULL);
	new_struct = (t_list *) malloc(sizeof(t_list));
	if (new_struct == NULL)
		return (NULL);
	new_struct->content = content;
	new_struct->next = NULL;
	return (new_struct);
} */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !del || !*lst)
		return ;
	while (*lst != NULL)
	{
		ptr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = ptr;
	}
}
/* void	content_deleter(void *content)
{
	free(content);
} */

/* #include <stdio.h>
int main()
{
	t_list *ptr_node1;
	t_list *ptr_node2;
	t_list *ptr_node3;
	t_list *ptr_node4;
	t_list *start;
	
	ptr_node1 = ft_lstnew(ft_content_creator("node content1"));
	ptr_node2 = ft_lstnew(ft_content_creator("node content2"));
	ptr_node3 = ft_lstnew(ft_content_creator("node content3"));
	ptr_node4 = ft_lstnew(ft_content_creator("node content4"));
	start = ptr_node1;
	ft_lstadd_back(&start, ptr_node2);
	ft_lstadd_back(&start, ptr_node3);
	ft_lstadd_back(&start, ptr_node4);
	printf("%d\n", ft_lstsize(start));
	ft_lstclear(&ptr_node3,content_deleter);
	printf("%d\n", ft_lstsize(start));
	return (0);
} */

//segfault porque o node2->next
//ainda aponta para o node3 que ja foi freed.