/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:19:37 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/29 19:53:23 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_)
{
	t_list	*tmp;

	if (lst && new_)
	{
		if (!*lst)
			*lst = new_;
		else
		{
			tmp = ft_lstlast(*lst);
			tmp->next = new_;
		}
	}
}
