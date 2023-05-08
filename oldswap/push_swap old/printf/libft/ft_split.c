/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:11:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/21 08:46:24 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_word(char const *s, char c, size_t x)
{
	size_t	i;
	char	*word;
	size_t	nb_word;
	size_t	j;

	j = 0;
	i = 0;
	nb_word = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		j = i;
		while ((s[i] != c) && (s[i]))
			i++;
		if (x == nb_word)
		{
			word = ft_substr(s, j, (i - j));
			return (word);
		}
		if (i > j)
			nb_word++;
	}
	return (NULL);
}

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	nb_word;

	i = 0;
	nb_word = 0;
	while (s[i])
	{
		while (s[i] != c && c)
		if (s[i] == c)
			i++;
		if (s[i])
			nb_word++;
		while ((s[i] != c) && (s[i]))
			i++;
	}
	return (nb_word);
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	size_t	x;
	size_t	nb_word;

	x = 0;
	if (s == NULL)
		return (NULL);
	nb_word = (ft_count(s, c));
	word = malloc(sizeof(const char *) * (nb_word + 1));
	if (word == 0)
		return (0);
	while (nb_word > x)
	{
		word[x] = ft_word(s, c, x,);
		printf("word %zu = %s\n",x,word[x]);
		if (word[x] == 0)
		{
			ft_error(word, NULL);
			return (0);
		}
		x++;
	}
	word[x] = 0;
	return (word);
}
