/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:02:16 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/07 01:34:20 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	start;
	char	*ss;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	ss = (char *)malloc(end - start + 1);
	if (!ss)
	{
		return (NULL);
	}
	while (start < end)
		ss[i++] = s1[start++];
	ss[i] = '\0';
	return (ss);
}
/*#include <stdio.h>
int	main(void)
{
	char s1[] = "simo13simo37simo";
	char set[20] = "simo";
	char *r = ft_strtrim(s1,set);
	printf("%s\n", r);
}*/