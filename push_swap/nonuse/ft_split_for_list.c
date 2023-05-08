/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_for_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:11:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/04/26 14:05:08 by aherrman         ###   ########.fr       */
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

void	ft_split_for_list(t_stack *stack_a, char  *s, char c)
{
	t_stack	*temp;
	size_t	x;
	size_t	nb_word;

	x = 0;
	if (s == NULL)
		return (NULL);
	nb_word = ft_count(s, c);
	while (nb_word > x)
	{
		ft_lstadd_back(&temp, ft_lstnew((void *)ft_atoi(ft_word(s, c, x))));
		if (temp->content == NULL)
		{
			ft_error;
			return (NULL);
		}		
		x++;
	}
	return (temp);
}
