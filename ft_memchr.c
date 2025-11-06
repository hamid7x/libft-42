/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:03:15 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/06 16:54:21 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p_s;

	p_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)p_s[i] == (unsigned char)c)
			return ((void *)(p_s + i));
		i++;
	}
	return (NULL);
}
