/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:53:22 by marvin            #+#    #+#             */
/*   Updated: 2024/04/21 19:00:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int numb)
{
	if (numb >= 'A' && numb <= 'Z')
		return (1);
	else if (numb >= 'a' && numb <= 'z')
		return (1);
	return (0);
}
