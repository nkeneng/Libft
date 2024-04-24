/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:26:58 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/24 17:30:12 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	incr;
	size_t	dest_len;

	incr = 0;
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + ft_strlen(src));
	while (src[incr] && dest_len + incr < size - 1)
	{
		dest[dest_len + incr] = src[incr];
		incr++;
	}
	dest[dest_len + incr] = '\0';
	return (dest_len + ft_strlen(src));
}
