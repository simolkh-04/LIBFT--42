/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 22:35:26 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/03 13:47:48 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_i(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	int		len;
	char	*ss;

	nb = n;
	len = len_i(n);
	if (nb == 0)
		return (ft_strdup("0"));
	ss = (char *)malloc(len + 1);
	if (!ss)
		return (NULL);
	ss[len] = '\0';
	if (nb < 0)
	{
		ss[0] = '-';
		nb = -nb;
	}
	i = len - 1;
	while (nb > 0)
	{
		ss[i--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (ss);
}
/*#include<stdio.h>
 int main()
 {
	int n = -2147483648;
	char *str = ft_itoa(n);

	if(str)
	{
		printf("%s\n", str);
	}
	return (0);
}*/