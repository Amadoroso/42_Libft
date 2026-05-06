/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 15:31:07 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/06 13:54:45 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (*s == 0 && (char) c == 0)
		return ((char *) s);
	return (0);
}

/*
#include "libft.h"
int	main()
{
	printf("%s\n", ft_strchr("aaaaBaaaBa", -23));
	printf("%p\n", ft_strchr("aaaaBaaaBa", -23));
	printf("%s\n", strchr("aaaaBaaaBa", -23));
	printf("%p\n", strchr("aaaaBaaaBa", -23));
} */