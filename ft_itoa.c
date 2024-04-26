/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:17:17 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/26 17:19:58 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = get_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str)
	{
		str[len] = '\0';
		if (n < 0)
		{
			str[0] = '-';
			n = -n;
		}
		else if (n == 0)
			str[0] = '0';
		while (n != 0)
		{
			str[--len] = '0' + (n % 10);
			n /= 10;
		}
	}
	return (str);
}
