/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:29:25 by snkeneng          #+#    #+#             */
/*   Updated: 2024/09/22 10:34:18 by stevennke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stradd(char **s1, char const *s2)
{
	size_t	len;
	char	*join;

	if (!*s1 || !s2)
		return (NULL);
	len = ft_strlen(*s1) + ft_strlen(s2) + 1;
	join = (char *)malloc(len);
	if (join)
	{
		ft_strlcpy(join, *s1, len - ft_strlen(s2));
		ft_strlcat(join, s2, len);
	}
	free(*s1);
	return (join);
}
