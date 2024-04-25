/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:32:50 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/25 13:35:08 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (len <= start)
		return (NULL);
	sub = (char *)malloc(len + 1);
	if (sub)
	{
		ft_strlcpy(sub, s + start, len + 1);
		return (sub);
	}
	return (NULL);
}


int	main(void){
	char *s = "Hello World"; // 11
	char *sub = ft_substr(s, 11, 12); // Hello
	printf("%s\n", sub);
	return (0);
}