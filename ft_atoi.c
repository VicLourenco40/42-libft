/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-albu <vde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:20:23 by vde-albu          #+#    #+#             */
/*   Updated: 2025/04/07 15:49:42 by vde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	neg;

	i = 0;
	while (isspace(nptr[i]))
		i++;
	neg = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
	res = 0;
	while (ft_isdigit(nptr[i]))
	{
		res = res * 10 + nptr[i] - 48;
		i++;
	}
	return (res * neg);
}
