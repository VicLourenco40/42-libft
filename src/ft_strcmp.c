/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-albu <vde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:49:30 by vde-albu          #+#    #+#             */
/*   Updated: 2025/07/24 12:10:07 by vde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strcmp(const char *const s1, const char *const s2)
{
	const unsigned char *us1 = (void *) s1;
	const unsigned char *us2 = (void *) s2;

	while ((*us1 || *us2) && *us1 == *us2)
	{
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}

int	ft_strncmp(const char *const s1, const char *const s2, size_t n)
{
	const unsigned char *us1 = (void *) s1;
	const unsigned char *us2 = (void *) s2;

	while (n-- && (*us1 || *us2) && *us1 == *us2)
	{
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}
