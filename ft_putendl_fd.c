/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:52:50 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/27 12:58:49 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	len;

	if (!s)
		return ;
	len = 0;
	while (*(s + len))
		len++;
	write(fd, s, len);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/* int	main()
{
	ft_putendl_fd("abc", 1);
	return (0);
} */