/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:45:18 by houkaamo          #+#    #+#             */
/*   Updated: 2025/11/05 15:17:29 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		str_len;

	if (!s || !f)
		return (NULL);
	str_len = ft_strlen(s);
	str = malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{	
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
