/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:32:50 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/25 14:40:04 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	sub = (char *)malloc(len + 1);
	if (sub)
	{
		ft_strlcpy(sub, s + start, len + 1);
	}
	return (sub);
}
