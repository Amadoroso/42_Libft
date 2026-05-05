/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:09:33 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/24 21:55:56 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen_until_c(char const *str, char c)
{
	size_t	len;

	len = 0;
	while (*str && *str != c)
	{
		len++;
		str++;
	}
	return (len);
}

static size_t	ft_string_count(char const *s, char c)
{
	size_t	s_index;
	size_t	string_count;

	s_index = 0;
	string_count = 0;
	while (*(s + s_index) != 0)
	{
		while (*(s + s_index) == c)
			s_index++;
		if (*(s + s_index) != c && *(s + s_index) != 0)
		{
			string_count++;
			while (*(s + s_index) != c && *(s + s_index) != 0)
				s_index++;
		}
	}
	return (string_count);
}

static char	**ft_error_handling(char const *s, char c)
{
	char	**ptr;
	size_t	in;

	if (s != NULL && c == '\0' && *s != 0)
	{
		ptr = (char **) malloc(2 * sizeof(char *));
		*ptr = (char *) malloc((ft_strlen_until_c(s, '\0') + 1) * sizeof(char));
		in = 0;
		while (*s != 0)
		{
			*(*ptr + in) = *s;
			s++;
			in++;
		}
		*(*ptr + in) = 0;
		*(ptr + 1) = NULL;
		return (ptr);
	}
	ptr = (char **) malloc(1 * sizeof(char *));
	*ptr = NULL;
	return (ptr);
}

static char	**ft_split_2(char const *s, char c,
	char **split, size_t string_count)
{
	size_t	out;
	size_t	in;
	size_t	s_index;
	size_t	len;

	out = 0;
	s_index = 0;
	while (out < string_count)
	{
		while (*(s + s_index) == c)
			s_index++;
		(*(split + out)) = (char *) malloc
			((ft_strlen_until_c((s + s_index), c) + 1) * sizeof(char));
		if ((*(split + out)) == 0)
			return (NULL);
		in = 0;
		len = ft_strlen_until_c((s + s_index), c);
		while (in < len && *(s + s_index) != c && *(s + s_index) != 0)
			split[out][in++] = s[s_index++];
		*(*(split + out) + in) = 0;
		out++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (s == NULL)
		return (NULL);
	if (*s == '\0' || c == '\0')
		return (ft_error_handling(s, c));
	split = (char **) malloc ((ft_string_count(s, c) + 1) * sizeof(char *));
	return (split = ft_split_2(s, c, split, ft_string_count(s, c)));
}

/* #include <unistd.h>
int	main()
{
	char**	ptr;
	size_t	out;
	size_t	in;

	ptr = ft_split(NULL, '\0');

	out = 0;
	while (*(ptr + out) != 0)
	{
		in = 0;
		while (*(*(ptr + out) + in) != 0)
		{
			write(1 , (*(ptr + out) + in), 1);
			in++;
		}
	write (1, "\n", 1);
	out++;
	}
	return (0);
} */