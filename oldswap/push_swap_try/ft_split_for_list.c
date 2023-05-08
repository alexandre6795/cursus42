/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_for_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:11:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/29 10:46:03 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_word(char const *s, char c, size_t x)
{
	size_t	j;
	size_t	i;
	char	*word;
	size_t	nb_word;

	i = 0;
	nb_word = 0;
	while (s[i])
	{
		while ((s[i] == c) && (s[i]))
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
		while (s[i] == c)
			i++;
		if (s[i])
			nb_word++;
		while ((s[i] != c) && (s[i]))
			i++;
	}
	return (nb_word);
}
int	ft_split_for_list(t_list *stack_a, char  *s, char c)
{
	t_list	*temp;
	size_t	x;
	size_t	nb_word;

	x = 0;
	if (s == NULL)
		return (NULL);
	nb_word = ft_count(s, c);
	while (nb_word > x)
	{
		ft_lstadd_back(temp, ft_lst_new(ft_word(s, c, x)));
		if (temp->content == NULL)
		{
			ft_error;
			return (NULL);
		}
		x++;
	}
	return (temp);
}
