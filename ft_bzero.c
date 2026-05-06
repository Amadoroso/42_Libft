/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:34:26 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/06 18:53:30 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*((unsigned char *) s + n) = '\0';
}

/* #include <unistd.h>
int	main()
{
	unsigned char s[10] = "Ola Adeus";
	int index;
	
	bzero(s, 5);
	index = 0;
	while (s[index++])
		write(1, &s[index], 1);
	return (0);
} */