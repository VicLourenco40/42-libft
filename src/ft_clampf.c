/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clampf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-albu <vde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:34:10 by vde-albu          #+#    #+#             */
/*   Updated: 2025/06/10 15:34:39 by vde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_clampf(const float n, const float min, const float max)
{
	if (n < min)
		return (min);
	if (n > max)
		return (max);
	return (n);
}
