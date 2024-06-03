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
	t_list	*start;
	t_list	*new_;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	start = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_ = ft_lstnew(content);
		if (!new_)
		{
			del(content);
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, new_);
		lst = lst->next;
	}
	return (start);
}
