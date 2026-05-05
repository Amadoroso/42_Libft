/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:43:44 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/27 17:31:56 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/* #include <stdio.h>
int	main()
{
	t_list *test_struct;

	test_struct = ft_lstnew("hello");
	printf("%s\n", (char *) test_struct->content);
	if (test_struct->next == NULL)
		printf("%s\n", "next is correct");
	free(test_struct);
	return (0);
} */