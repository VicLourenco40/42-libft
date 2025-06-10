/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-albu <vde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:37:12 by vde-albu          #+#    #+#             */
/*   Updated: 2025/06/10 14:38:01 by vde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_clamp(const int n, const int min, const int max)
{
	if (n < min)
		return (min);
	if (n > max)
		return (max);
	return (n);
}
