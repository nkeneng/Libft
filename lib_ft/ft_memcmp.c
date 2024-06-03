/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:10:25 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/24 18:11:52 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			incr;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	incr = 0;
	while (incr < n)
	{
		if (str1[incr] != str2[incr])
			return (str1[incr] - str2[incr]);
		incr++;
	}
	return (0);
}
