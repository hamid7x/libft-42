/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 08:42:32 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/05 15:19:03 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list	*new_lst;
	t_list	*ptr;
	t_list	*new_node;
	void	*new_content;

	if (!f || !del)
		return (NULL);
	ptr = lst;
	new_lst = NULL;
	while (ptr)
	{
		new_content = f(ptr->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_node->content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		ptr = ptr->next;
	}
	return (new_lst);
}
