/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:08:42 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/03 10:51:34 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	unsigned const char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned const char *)src;
	if (p_dest > p_src)
	{
		while (n--)
			p_dest[n] = p_src[n];
	}
	else
	{
		while (n--)
			*p_dest++ = *p_src++;
	}
	return (dest);
}
