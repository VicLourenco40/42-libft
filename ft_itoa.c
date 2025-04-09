/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-albu <vde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:14:14 by vde-albu          #+#    #+#             */
/*   Updated: 2025/04/09 14:02:39 by vde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	get_digits(long num)
{
	unsigned int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	int				neg;
	unsigned int	digits;
	long			num;
	char			*string;

	num = n;
	neg = num < 0;
	if (neg)
		num = -num;
	digits = get_digits(num);
	string = malloc(sizeof(char) * (digits + neg + 1));
	if (!string)
		return (NULL);
	string[digits + neg] = '\0';
	if (neg)
		string[0] = '-';
	i = digits + neg - 1;
	while (i >= neg)
	{
		string[i] = '0' + (num % 10);
		num /= 10;
		i--;
	}
	return (string);
}
