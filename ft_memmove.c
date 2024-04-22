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
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*src2;
	size_t			incr;
	unsigned char	temp;

	str = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	incr = 0;
	while (incr < n && str[incr] && src2[incr])
	{
		temp = src2[incr];
		str[incr] = temp;
		incr++;
	}
	return (dest);
}
