/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:53:18 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/11 21:28:49 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (n == 0)
		return (dst);
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *dest = NULL;
// 	char *src = NULL;
// 	//printf("%s", (char *)ft_memcpy(dest, src, 20));
// 	printf("%s", memcpy(dest, src, 13));
// 	//printf("%s\n", dest);
// 	return (0);
// }