/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_av_to_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:32:03 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/21 09:16:19 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_word_to_list(char **word)
{
	t_list	temp;
	int		i;
	
	i = 0;
	while (word[i] != '\0')
	{
		temp = ft_lstnew(word[i]);
		i++;
	}
}
t_list	*ft_av_to_int(char **av, int ac)
{
	t_list *temp;
	char **word;
	int i;
	int j;

	i = 0;
	j = 0;
	while (av[i])
	{
		word = ft_split(av[i], SEPARATOR);
		i++;
	}
	temp = ft_word_to_list(word)
		printf("split ok\n");
	ft_check_list_char(temp);
	ft_printf("check char ok\n");

	printf("atoi ok\n");
	ft_list_check_int(temp);
	ft_printf("check int ok\n");
	i = 0;
	return ();
}