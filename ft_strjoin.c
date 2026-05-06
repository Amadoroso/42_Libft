/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:58:31 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/06 13:55:30 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	char	*s1_s2;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	s1_s2 = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (s1_s2 == 0)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		*(s1_s2 + index) = *(s1 + index);
		index++;
	}
	while (*s2)
	{
		*(s1_s2 + index) = *s2;
		s2++;
		index++;
	}
	*(s1_s2 + index) = 0;
	return (s1_s2);
}

/*
int main()
{
	char *joined;
	
	joined = ft_strjoin("OLA", "123");
	printf("%s", joined);
	free(joined);
} */
