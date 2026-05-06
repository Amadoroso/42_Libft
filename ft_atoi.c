/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:44:37 by apinho-a          #+#    #+#             */
/*   Updated: 2026/05/06 13:18:08 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	result;
	int	neg;

	result = 0;
	neg = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			neg = -1;
		nptr++;
	}
	while (*nptr != 0 && (*nptr >= 48 && *nptr <= 57))
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	if (neg == -1)
		return (result * -1);
	return (result);
}

/* #include "libft.h"
int	main()
{
	printf("%d\n", ft_atoi("	-1x234a"));
	printf("%d\n", atoi("	-1x234a"));
	return (0);
} */