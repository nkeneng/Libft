/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:06:51 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/24 18:06:53 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			incr;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	incr = 0;
	while (incr < n)
	{
		if (str[incr] == ch)
			return ((void *)(str + incr));
		incr++;
	}
	return (NULL);
}
