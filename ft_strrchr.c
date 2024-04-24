/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:45:50 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/24 17:51:53 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*temp;

	temp = 0;
	while (*str)
	{
		if (*str == c)
			temp = (char *)str;
		str++;
	}
	if (*str == c)
		return ((char *)str);
	return (temp);
}
