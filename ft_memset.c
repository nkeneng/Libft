/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:31:58 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/22 19:54:17 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			incr;
	unsigned char	*str;

	incr = 0;
	str = (unsigned char *)s;
	while (str[incr] && incr < n)
	{
		str[incr] = c;
		incr++;
	}
	return (s);
}
