/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:32:17 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/26 17:32:19 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	incr;

	if (!s || !f)
		return (NULL);
	new = ft_strdup(s);
	if (!new)
		return (NULL);
	incr = 0;
	while (new[incr])
	{
		new[incr] = f(incr, new[incr]);
		incr++;
	}
	return (new);
}
