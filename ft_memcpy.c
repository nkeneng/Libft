/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:12:48 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/24 11:46:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			incr;

	incr = 0;
	while (incr < n)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		incr++;
	}
	return (dest);
}
