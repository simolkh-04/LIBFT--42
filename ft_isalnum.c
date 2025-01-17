/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:54:38 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/06 18:30:12 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (8);
	}
	return (0);
}
/*#include<stdio.h>
int main()
{
	int c = '+';
	printf("%d", ft_isalnum(c));
	return (0);
}*/