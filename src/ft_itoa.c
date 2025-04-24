/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-albu <vde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:14:14 by vde-albu          #+#    #+#             */
/*   Updated: 2025/04/24 11:33:25 by vde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <libft.h>

static unsigned int	get_digits(int n)
{
	unsigned int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	int				neg;
	unsigned int	digits;
	char			*string;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	neg = n < 0;
	if (neg)
		n = -n;
	digits = get_digits(n);
	string = malloc(sizeof(char) * (digits + neg + 1));
	if (!string)
		return (NULL);
	string[digits + neg] = '\0';
	if (neg)
		string[0] = '-';
	i = digits + neg - 1;
	while (i >= neg)
	{
		string[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (string);
}
