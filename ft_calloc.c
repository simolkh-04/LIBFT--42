/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:35 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/06 21:41:38 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;

	p = malloc(size * nmemb);
	if (!p)
	{
		return (NULL);
	}
	ft_bzero(p, size * nmemb);
	return (p);
}

/*#include<stdio.h>
int	main(void)
{
	int *p = ft_calloc(11,4);
	int i = 0;
	while (i < 11)
	{
		printf("%d", p[i]);
		i++;
	}
	printf("\n");
}*/