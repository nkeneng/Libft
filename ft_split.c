/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:46:45 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/26 15:30:00 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_substrings(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
			i++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (i);
}

void	*free_all(char **arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(arr[i++]);
	free(arr);
	return (NULL);
}

char	**split_and_save(char **result, int wd_count, char const *s, char c)
{
	int		incr;
	int		pos;
	int		start;

	incr = 0;
	pos = 0;
	start = 0;
	while (wd_count-- > 0)
	{
		while (s[pos] == c)
			pos++;
		if (s[pos] != '\0')
		{
			start = pos;
			while (s[pos] && s[pos] != c)
				pos++;
			result[incr] = ft_substr(s, start, pos - start);
			if (!result)
				return (free_all(result, wd_count));
		}
		incr++;
	}
	result[incr] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		wd_count;

	wd_count = count_substrings(s, c);
	result = malloc((wd_count + 1) * sizeof (char *));
	if (result)
		return (split_and_save(result, wd_count, s, c));
	return (result);
}
