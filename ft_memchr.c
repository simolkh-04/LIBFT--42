/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:51:31 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/06 11:35:01 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include<stddef.h>
#include <stdio.h>

int	main(void)
{
	char s[] = "simo 1337 um9p";
	printf("%s\n", ft_memchr(s, 'm', 20));
	printf("%s \n", memchr(s, 'm', 15));
	return (0);
}*/