/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-albu <vde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:44:33 by vde-albu          #+#    #+#             */
/*   Updated: 2025/04/08 15:13:28 by vde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	substr_len;
	char	*substr;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (NULL);
	if (start + len > s_len)
		substr_len = s_len - start;
	else
		substr_len = len;
	substr = malloc(sizeof(char) * (substr_len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, &s[start], substr_len);
	substr[substr_len] = '\0';
	return (substr);
}
