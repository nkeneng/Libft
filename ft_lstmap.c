/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:27:09 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/29 20:15:42 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (lst && f && del)
	{
		new_lst = malloc(sizeof(t_list) * ft_lstsize(lst));
		if (new_lst)
		{
			while (lst)
			{
				if (!f(lst->content))
					del(lst->content);
				new_lst->next = lst;
				lst = lst->next;
			}
		}
		return (new_lst);
	}
	else
		return (NULL);
}
