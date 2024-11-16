/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:02:38 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/11 17:48:31 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	nl;

	i = 0;
	nl = ft_strlen(little);
	if (nl == 0)
	{
		return ((unsigned char *)big);
	}
	while (i < len && big[i])
	{
		if (big[i] == little[0] && (i + nl <= len) && ft_strncmp(&big[i],
				little, nl) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
/*#include<stdio.h>
int	main(void)
{
	char *big = "hello, world";
	char *little = "";
	char *result = ft_strnstr(big, little, 10);
	printf("%s\n", result);
	return (0);
}*/