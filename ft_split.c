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

int count_substrings(char *s, char c)
{
	int i;
	int pos;

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

char **ft_split(char const *s, char c)
{
	char **result;
	int subst_count;
	int incr;
	int pos;

	subst_count = count_substrings((char *)s, c);
	incr = 0;
	pos = 0;
	result = malloc((subst_count + 1) * sizeof(char *));
	if (result)
	{
		while (s[pos])
		{
			if (s[pos] == c || s[pos + 1] == '\0')
			{
				result[incr] = malloc(pos + 1);
				ft_strlcpy(result[incr], s, pos + 1);
				incr++;
				s = s + pos + 1;
			}
			pos++;
		}
		result[incr] = NULL;
	}
	return (result);
}

int main(void)
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