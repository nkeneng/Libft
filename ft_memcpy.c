/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:12:48 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/22 20:24:06 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*src2;
	size_t			incr;

	str = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	incr = 0;
	while (incr < n && str[incr] && src2[incr])
	{
		str[incr] = src2[incr];
		incr++;
	}
	return (dest);
}
