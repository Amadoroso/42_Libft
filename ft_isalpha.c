/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:21:08 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/06 13:20:21 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if ((character >= 65 && character <= 90)
		|| (character >= 97 && character <= 122))
		return (1);
	else
		return (0);
}

/* #include "libft.h"
int	main()
{
	char	writer;

	writer = ft_isalpha('A') + 48;
	write(1, &writer, 1);
} */