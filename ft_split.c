/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhal <mlakhal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:35:15 by mlakhal           #+#    #+#             */
/*   Updated: 2024/11/07 01:34:54 by mlakhal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c && in_word == 1)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}
/*int main() {
	char str[] = "jfjd jfj fj";
	printf("%d\n", ft_count_word(str));
}*/

static int	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static char	*alloc_word(char const *s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = word_len(s, c);
	i = 0;
	word = (char *)malloc(word_len(s, c) + 1);
	if (!word)
	{
		return (NULL);
	}
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	str = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!str || !s)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (s[i] != c)
		{
			str[j] = alloc_word(&s[i], c);
			if (!str[j++])
				return (NULL);
			i = i + word_len(&s[i], c);
		}
		else
			i++;
	}
	str[j] = (NULL);
	return (str);
}
/*#include<stdio.h>
int	main(void) {
	char str[] = "simo aymen kuhaku";
	char c = ' ';
	char **result = ft_split(str, c);

	for (int i = 0; result && result[i]; i++) {
		printf("%s\n", result[i]);
	}
	return (0);
}*/