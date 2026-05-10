/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 18:34:11 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/10 15:33:15 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_counter(char const *s, char c)
{
	int	word_counter;
	
	word_counter = 0;
	while (*s != 0 && c != 0)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != 0)
			word_counter++;
		s++;
	}
	return (word_counter);
}

char	**ft_split(char const *s, char c)
{
char	**ptr_strings;
char	*string;
int		word_counter;
int		index_ptr;
int		i;
int		j;
int		k;

if (!s || !c)
	return((char **) ft_calloc(1, sizeof(char*)));
word_counter = ft_word_counter(s, c);
ptr_strings = (char **) ft_calloc(word_counter + 1, sizeof(char*));
if (!ptr_strings)
	return (NULL);
index_ptr = 0;
i = 0;
while (s[i] != 0 && c != 0)
{
	while (s[i] == c && s[i + 1] == c)
		i++;
	if (s[i] == c && s[i + 1] != c)
	{
		i++;
		j = 0;
		while (s[i + j] != c && s[i + j] != 0)
			j++;
		if (s[i] == 0)
			return (ptr_strings);
		string = (char *) ft_calloc(j + 1, sizeof(char));
		*(ptr_strings + index_ptr) = string;
		index_ptr++;
		if (!string)
			return (ptr_strings);
		k = 0;
		while (k < j)
		{
			string[k] = s[i];
			k++;
			i++;
		}
	}
}
return (ptr_strings);
}

/* int	main ()
{
	char **ptr_strings;

	ptr_strings = ft_split(NULL, 0);
	while (*ptr_strings != 0)
	{
		printf("%s\n", *ptr_strings);
		ptr_strings++;
	}
	return (0);
} */