/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:12:56 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/24 18:12:58 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	incr;
	size_t	incr2;

	incr = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[incr] && incr < len)
	{
		incr2 = 0;
		while (needle[incr2] && haystack[incr + incr2] == needle[incr2]
			&& incr + incr2 < len)
			incr2++;
		if (!needle[incr2])
			return ((char *)(haystack + incr));
		incr++;
	}
	return (NULL);
}
