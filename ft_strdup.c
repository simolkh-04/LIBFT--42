/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:20:51 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/03 13:29:46 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ss;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[len])
	{
		len++;
	}
	ss = (char *)malloc(len + 1);
	if (!ss)
	{
		return (NULL);
	}
	while (i < len)
	{
		ss[i] = s[i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
/*#include<stdio.h>
int	main(void)
{
	printf("%s\n", ft_strdup("simo"));
}*/