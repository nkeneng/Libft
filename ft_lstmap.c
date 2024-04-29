/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snkeneng <snkeneng@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:27:09 by snkeneng          #+#    #+#             */
/*   Updated: 2024/04/29 20:52:38 by snkeneng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*start;

	if (lst && f && del)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (new_lst)
		{
			start = new_lst;
			while (lst->next)
			{
				lst = lst->next;
				ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
				if (!new_lst->next)
					ft_lstdelone(start, del);
				new_lst = new_lst->next;
			}
			return (start);
		}
	}
	return (NULL);
}
