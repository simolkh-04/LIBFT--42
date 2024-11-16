/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:57:08 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/11 17:40:20 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	if (!dst || !src)
		return (slen + dlen);
	if (size == 0)
		return (slen);
	i = 0;
	j = dlen;
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst[] = "Hello";
	const char src[] = "World";

	printf("%ld\n", ft_strlcat(dst, src, 0));
	printf("%s\n", dst);
	char dst1[] = "Hello";
	const char src1[] = "World";

	printf("%ld\n", strlcat(dst1, src1, 0));
	printf("%s\n", dst1);
}*/