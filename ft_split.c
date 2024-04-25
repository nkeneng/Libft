/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:46:45 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/25 15:57:59 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_substrings(char *s, char c)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (s[pos])
	{
		if (s[pos] == c)
			i++;
		pos++;
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

	incr = 0;
	pos = 0;
	start = 0;
	result = malloc((count_substrings((char *)s, c) + 2) * ft_strlen(s));
	if (result)
	{
		while (s[pos])
		{
			if (s[pos] == c || s[pos + 1] == '\0')
			{
				result[incr] = malloc(pos - start + 1);
				if (s[pos + 1] == '\0')
					ft_strlcpy(result[incr], &s[start], pos - start + 2);
				else
					ft_strlcpy(result[incr], &s[start], pos - start + 1);
				incr++;
				start = pos + 1;
			}
			pos++;
		}
		result[incr] = NULL;
	}
	return (result);
}

int	main(void)
{
	char *src = "hello-world-demo";

	char **arr = ft_split(src, '-');

	while (*arr)
	{
		printf("%s\n", *arr);
		arr++;
	}
	return (0);
}
