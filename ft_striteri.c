/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:24:28 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/03 13:51:14 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	f(unsigned int i, char *s)
{
	if (i % 2 == 0)
		*s -= 32;
}

#include <stdio.h>

int	main(void)
{
	char s[] = "huhuefdj";
	ft_striteri(s, f);
	printf("%s\n" , s);
	return (0);
}*/