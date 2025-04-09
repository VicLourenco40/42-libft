/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-albu <vde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:19:21 by vde-albu          #+#    #+#             */
/*   Updated: 2025/04/09 17:41:00 by vde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	i;
	unsigned int	len;
	char			*new;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = 0;
	while (s1[i + len] && !ft_strchr(set, s1[i + len]))
		len++;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s1[i], len + 1);
	return (new);
}
