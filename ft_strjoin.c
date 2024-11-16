/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:02:52 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/03 13:52:12 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;
	char	*ss;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	j = 0;
	ss = (char *)malloc(len1 + len2 + 1);
	if (!ss)
		return (NULL);
	while (s1[i])
	{
		ss[i] = s1[i];
		i++;
	}
	while (s2[j])
		ss[i++] = s2[j++];
	ss[i] = '\0';
	return (ss);
}
/*#include<stdio.h>
int	main(void)
{
   printf("%s\n", ft_strjoin("hello", "simo"));
   return (0);
}*/
