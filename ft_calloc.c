/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:52:18 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/04 18:41:42 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*data;

	if (nmemb == 0 || size == 0)
	{
		data = malloc(1);
		return (data);
	}
	if (size != 0 && (nmemb > SIZE_MAX / size))
		return (NULL);
	data = malloc(nmemb * size);
	if (!data)
		return (NULL);
	ft_bzero(data, (nmemb * size));
	return (data);
}
