/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-albu <vde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:43:54 by vde-albu          #+#    #+#             */
/*   Updated: 2025/04/09 12:22:17 by vde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static unsigned int	count_strings(const char *s, char c)
{
	unsigned int	i;
	unsigned int	is_string;
	unsigned int	count;

	i = 0;
	is_string = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			is_string = 0;
		else if (!is_string)
		{
			is_string = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*get_string(const char *s, char c)
{
	unsigned int	i;
	char			*string;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	string = malloc(sizeof(char) * (i + 1));
	if (!string)
		return (NULL);
	ft_strlcpy(string, s, i + 1);
	return (string);
}

char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;
	unsigned int	is_string;
	char			**strings;

	count = count_strings(s, c);
	strings = malloc(sizeof(char *) * (count + 1));
	if (!strings)
		return (NULL);
	strings[count] = NULL;
	i = -1;
	j = -1;
	is_string = 0;
	while (s[++i])
	{
		if (s[i] == c)
			is_string = 0;
		else if (!is_string)
		{
			is_string = 1;
			strings[++j] = get_string(&s[i], c);
		}
	}
	return (strings);
}
