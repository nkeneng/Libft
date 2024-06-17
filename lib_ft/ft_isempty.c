/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isempty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:53:38 by snkeneng          #+#    #+#             */
/*   Updated: 2024/06/17 20:54:02 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isempty(char *s)
{
	if (!s || !*s)
		return (1);
	return (0);
}
