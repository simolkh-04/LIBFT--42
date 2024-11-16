/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:19:43 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/07 01:38:53 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if ((!s) || (start >= ft_strlen(s)))
	{
		return (ft_strdup(""));
	}
	i = ft_strlen(s);
	if (len > i - start)
	{
		len = i - start;
	}
	sub = malloc(len + 1);
	if (!sub)
	{
		return (NULL);
	}
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
/*#include<stdio.h>
int	main(void)
{
	printf("%s\n", ft_substr("hello, world", 1, 1));
}*/