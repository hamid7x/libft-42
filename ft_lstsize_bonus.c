/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 08:44:07 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/05 08:44:11 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		cnt;

	ptr = lst;
	cnt = 0;
	while (ptr)
	{
		cnt++;
		ptr = ptr->next;
	}
	return (cnt);
}
