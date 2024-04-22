/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:57:46 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/22 20:09:53 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s2;
	size_t			incr;

	s2 = (unsigned char *)s;
	incr = 0;
	while (s2[incr] && incr < n)
	{
		s2[incr] = '\0';
		incr++;
	}
}
