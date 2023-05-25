#include "push_swap.h"

void	ft_sort_other(t_all *list)
{
	int	len_t;

	len_t = ft_lst_range(list->sa);
	ft_first_sort(list, len_t);
	ft_sort_high(list, len_t);
	if (ft_list_is_reverse(list->sb, ft_lst_range(list->sb)) == 1)
	{
		while (list->sb)
			ft_push(&list->sa, &list->sb, 1);
	}
	else
		ft_sort_endp1(list, len_t);
 if (ft_list_is_reverse(list->sb, ft_lst_range(list->sb)) == 1)
	 {
	 	while (list->sb)
			ft_push(&list->sa, &list->sb, 1);
	 }
	 else
	 	ft_sort_endp2(list, len_t);
	// if (ft_list_is_reverse(list->sb, ft_lst_range(list->sb)) == 1)
	// 	while (list->sb)
	// 		ft_push(&list->sa, &list->sb, 1);
	// else
	// 	ft_sort_endp3(list, len_t);
}

int	ft_next_rank(t_stack *list, int len_t)
{
	while (list->next && list->next && list->r != len_t)
		list = list->next;
	while (list->av && list->av && list->r == list->av->r + 1)
		list = list->av;
	return (len_t - list->r + 1);
}
void ft_second_sort(t_all *list,int len_t,int len_a,int r)
{
	
	list->sa = *ft_fc(&list->sa);
	list->sb = *ft_fc(&list->sb);
	len_a = ft_next_rank(list->sa, len_t);
	ft_rrotate(&list->sb,2);
	{
	 if (list->sa->next->r == len_t - len_a-1 &&list->sa->r == len_t - len_a )
		ft_swap(list->sa, 1);
	 if (ft_last_ranking(list->sa) == len_t - len_a)
		ft_rrotate(&list->sa, 1);
	else if (list->sb->r == len_t * r / 100 && (list->sb->r
				- 1 == ft_last_ranking(list->sa)
				|| ft_last_ranking(list->sa) == len_t))
	{
		ft_push(&list->sa, &list->sb, 1);
		ft_rotate(&list->sa, 1);
	}
	else if (list->sb->r == len_t - len_a || list->sb->r == len_t - len_a - 1)
		ft_push(&list->sa, &list->sb, 1);
}
}

void	ft_end_sort(t_all *list, int len_t, int len_a)
{
	while (ft_last_ranking(list->sa) != len_t)
	{
		len_a = ft_next_rank(list->sa, len_t);
		if (list->sb->r == len_t - len_a)
			ft_push(&list->sa, &list->sb, 1);
		else
		{
			ft_rrotate(&list->sa, 1);
			if (list->sa->next->r != len_t - (len_a - 1)
				&& list->sa->next->r < list->sa->r)
			{
				ft_swap(list->sa, 1);
				if (list->sa->r != len_t - (len_a))
					ft_push(&list->sb, &list->sa, 2);
			}
			else
			{
				if (list->sa->r != len_t - (len_a))
					ft_push(&list->sb, &list->sa, 2);
			}
			if (list->sb->r < list->sb->next->r)
				ft_swap(list->sb, 2);
		}
	}
}
void ft_sort_top(t_all *list, int len_t, int len_a, int range)
{
	while (list->sb->r >= len_t * range / 100)
	{
		len_a = ft_lst_range(list->sa);
		if (ft_last_ranking(list->sa) == len_t - len_a)
			ft_rotate(&list->sa, 1);
		if (list->sb->r > list->sb->next->r)
			ft_swap(list->sb, 2);
		else if (list->sb->r == len_t - len_a || list->sb->r == len_t - len_a
				- 1 || list->sb->r == len_t - len_a - 2)
		{
			ft_push(&list->sa, &list->sb, 1);
			if (ft_last_ranking(list->sa)== len_t)
				ft_rotate(&list->sa, 1);
			if (list->sa->r > list->sa->next->r)
				ft_swap(list->sb, 1);
		}
		else
			ft_rotate(&list->sb, 2);
	}
	// while (ft_last_ranking(list->sb) >= len_t * 66 / 100)
	// {
	// 	ft_rrotate(&list->sb, 2);
	// 	if (list->sb->r < list->sb->next->r)
	// 		ft_swap(list->sb, 2);
	// }
	//if (ft_valid_sort(list->sa, ft_lst_range(list->sa)) != 1)
	//	ft_sort_top(list, len_t, len_a, range);
}