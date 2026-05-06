/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:46:34 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/06 14:01:18 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	size_t	max_val;
	void	*result;

	max_val = -1;
	if (nmeb == 0 || size == 0)
		return (malloc(0));
	else if (size > max_val / nmeb)
		return (NULL);
	else
	{
		result = malloc (nmeb * size);
		if (!result)
			return (NULL);
		return (ft_memset(result, '\0', nmeb * size));
	}
}

/* int	main()
{
	int	*array_1;
	int	*array_2;
	size_t	nmeb;
	size_t	index;

	nmeb = 4;
	array_1 = (int *) ft_calloc (nmeb, sizeof(int));
	array_2 = (int *) calloc (nmeb, sizeof(int));
	index = 0;
	while (index < nmeb)
	{
		printf("%d", *(array_1 + index++));
		printf("%c", ' ');
	}
	printf("%c", '\n');
	index = 0;
	while (index < nmeb)
	{
		printf("%d", *(array_2 + index++));
		printf("%c", ' ');	
	}
	free(array_1);
	free(array_2);
	return (0);
} */