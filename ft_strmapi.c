/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:26:16 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/03 14:05:45 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str || !f)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char f(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return (c - 32);
	}
	return (c);
}

char	s(unsigned int i, char c)
{
	if (i % 2 != 0)
	{
		return (c - 32);
	}
	return (c);
}

char	g(unsigned int i, char c)
{
	if (i  == 4)
	{
		return ('g');
	}
	return (c);
}
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strmapi("dfghjk", f));
	printf("%s\n", ft_strmapi("dfghjk", s));
	printf("%s\n", ft_strmapi("dfghjk", g));
}*/