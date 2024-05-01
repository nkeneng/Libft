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
	char				*sub;
	unsigned int		str_len;
	int					new_len;

	str_len = ft_strlen(s);
	new_len = len;
	if (str_len <= start || !str_len || !len)
		return (ft_strdup(""));
	if (len > str_len - start)
		new_len = str_len - start;
	sub = (char *)malloc(new_len + 1);
	if (sub)
		ft_strlcpy(sub, s + start, new_len + 1);
	return (sub);
}
