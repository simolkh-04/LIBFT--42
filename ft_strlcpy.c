/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:49:38 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/06 11:34:29 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size == 0)
	{
		return (j);
	}
	else
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (j);
}
// #include<stdio.h>
// int main()
// {
//     char dest[20];
//     char src[] = "hello";
//     char dest1[20];
//     ft_strlcpy(dest, src, 10);
//     printf("%s\n", dest);
//     strlcpy(dest1, src, 10);
//     printf("%s\n", dest1);
//     return (0);
// }