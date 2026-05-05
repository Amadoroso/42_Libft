/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:08:50 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/05 15:42:24 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	char			*dup;
	unsigned int	index;

	dup = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dup == 0)
		return (NULL);
	index = 0;
	while (*s)
	{
		*(dup + index) = *s;
		s++;
		index++;
	}
	*(dup + index) = 0;
	return (dup);
}
t_list	*ft_lstnew(void *content)
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
}
void	ft_lstadd_back(t_list **lst, t_list *new)
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

static void	ft_modify(void *content)
{
	while (*((char *) content) != 0)
	{
		*((char *) content) = '1';
		content++;
	}
} */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>
int	main()
{
	t_list	*ptr_node1;
	t_list	*ptr_node2;
	t_list	*start;
	char	*content;

	content = "ola adeus";
	ptr_node1 = ft_lstnew(ft_strdup(content));
	ptr_node2 = ft_lstnew(ft_strdup(content));
	start = ptr_node1;
	ft_lstadd_back(&start, ptr_node2);
	ft_lstiter(start, ft_modify);
	printf("%s\n", (char *) ptr_node1->content);
	return (0);
} */