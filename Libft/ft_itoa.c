/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatianasilva <tatianasilva@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 08:32:10 by tatperei          #+#    #+#             */
/*   Updated: 2023/11/02 11:45:32 by tatianasilv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_len(int long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (i = 1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*dst;
	int			len;
	int long	nb;

	nb = n;
	len = calc_len(n);
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	if (nb == 0)
		dst[len - 1] = '0';
	if (nb < 0)
	{
		dst[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		dst[len - 1] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (dst);
}
