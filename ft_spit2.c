/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spit2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 18:34:11 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/09 20:37:21 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_counter(char const *s, char c)
{
	int	word_counter;
	
	word_counter = 0;
	if (*s != c && *s != 0)
		word_counter++;
	while (*s != 0)
	{
		if (*s == c && *(s + 1) != c)
			word_counter++;
		s++;
	}
	return (word_counter);
}

char	**ft_split(char const *s, char c)
{

}

int	main ()
{
	char **ptr_strings;

	ptr_strings = ft_split("//OLA//ADEUS", '/');
	while (*ptr_strings != 0)
	{
		printf("%s\n", *ptr_strings);
		ptr_strings++;
	}
	return (0);
}