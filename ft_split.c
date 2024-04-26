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

int	count_substrings(char *s, char c)
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
// sass-ffss-ssff

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		incr;
	int		pos;
	int		start;
	int		wd_count;

	incr = 0;
	pos = 0;
	start = 0;
	wd_count = count_substrings((char *)s, c);
	result = malloc((wd_count + 1) * sizeof (char *));
	if (result)
	{
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
			}
			incr++;
		}
		result[incr] = NULL;
	}
	return (result);
}

int	main(void)
{
	char	*src = "hello-world-demo";

	char	**arr = ft_split(src, '-');

	while (*arr)
	{
		printf("%s\n", *arr);
		arr++;
	}
	return (0);
}
