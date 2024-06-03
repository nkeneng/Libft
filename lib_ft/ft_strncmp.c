/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:52:14 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/24 17:53:17 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	incr;

	incr = 0;
	while (s1[incr] && s2[incr] && s1[incr] == s2[incr] && incr < n - 1)
		incr++;
	if (n > 0)
		return ((unsigned char)s1[incr] - (unsigned char)s2[incr]);
	return (0);
}
