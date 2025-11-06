/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houkaamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:11:09 by houkaamo          #+#    #+#             */
/*   Updated: 2025/10/28 09:34:52 by houkaamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_nb_len(long n)
{
	int	cnt;

	cnt = 0;
	while (n)
	{
		n = n / 10;
		cnt++;
	}
	return (cnt);
}

static void	fill_str(char *str, long n, int len, int sign)
{
	str[len--] = '\0';
	while (n)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	if (sign)
		str[len] = '-';
}

static char	*zero_case_handler(void)
{	
	char	*str;

	str = malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		is_negative;
	int		len_nb;
	long	nb;
	char	*str;

	nb = n;
	if (nb == 0)
		return (zero_case_handler());
	is_negative = 0;
	if (nb < 0)
	{
		nb *= -1;
		is_negative = 1;
	}
	len_nb = calc_nb_len(nb);
	if (is_negative)
		len_nb += 1;
	str = malloc(sizeof(char) * (len_nb + 1));
	if (!str)
		return (NULL);
	fill_str(str, nb, len_nb, is_negative);
	return (str);
}
