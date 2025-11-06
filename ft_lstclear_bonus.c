/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:23:24 by houkaamo          #+#    #+#             */
/*   Updated: 2025/10/26 14:51:42 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr)
	{
		del(ptr->content);
		next_node = ptr->next;
		free(ptr);
		ptr = next_node;
	}
	*lst = NULL;
}
