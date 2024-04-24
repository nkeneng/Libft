/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:18:48 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/24 17:26:07 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	incr;

	incr = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[incr] && incr < size - 1)
	{
		dest[incr] = src[incr];
		incr++;
	}
	dest[incr] = '\0';
	return (ft_strlen(src));
}
