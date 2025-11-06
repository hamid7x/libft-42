/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:24:41 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/04 18:41:07 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_src;
	unsigned char		*p_dest;

	p_src = (unsigned char *) src;
	p_dest = (unsigned char *)dest;
	while (n--)
		*p_dest++ = *p_src++;
	return (dest);
}
