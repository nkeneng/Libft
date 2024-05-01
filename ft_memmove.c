/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:24:33 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/22 20:39:05 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	incr;
	char	*dest2;
	char	*src2;

	if (!dest || !src)
		return (NULL);
	incr = 0;
	dest2 = dest;
	src2 = (char *)src;
	if (dest2 < src2)
	{
		while (incr < n)
		{
			*(char *)dest++ = *(char *)src++;
			incr++;
		}
	}
	else
	{
		while (incr < n--)
			*(char *)(dest + n - 1) = *(char *)(src + n - 1);
	}
	return (dest2);
}
