void	ft_sort_endp1(t_all *list, int len_t)
{
	int	len_a;

	len_a = ft_lst_range(list->sa);
	while (list->sb->r > len_t * 66 / 100 || ft_last_ranking(list->sb) > len_t
		* 66 / 100)
	{
		if (list->sb->r == len_t - len_a)
		{
			ft_push(&list->sa, &list->sb, 1);
			len_a++;
		}
		else if (ft_last_ranking(list->sa) == len_t - len_a)
		{
			ft_rrotate(&list->sa, 1);
			len_a++;
		}
			
		else if (list->sb->r < len_t * 80 / 100 && list->sb->r >= len_t * 66
				/ 100)
		{
			if (ft_last_ranking(list->sb) < list->sb->r)
				ft_bbot(list, 2,0);
			else
				ft_rotate(&list->sb, 2);
		}
		else if (list->sb->r > len_t * 80 / 100)
			ft_push(&list->sa, &list->sb, 1);
		else if(ft_last_ranking(list->sa)!= len_t && list->sa->r != len_t - len_a)
			ft_sort_time_is_no_sort(list,len_t);
			else 
			ft_rotate(&list->sa,1);
			
	}
}
 void	ft_sort_endp2(t_all *list, int len_t)
 {
 	int	len_a;

 	len_a = ft_lst_range(list->sa);
 	while (list->sb->r > len_t * 33 / 100)
 	{
 		if (list->sb->r == len_t - len_a)
 		{
 			ft_push(&list->sa, &list->sb, 1);
 			len_a++;
 		}
		else if (ft_last_ranking(list->sa) == len_t - len_a)
		{
			ft_rrotate(&list->sa, 1);
			len_a++;
		}
 		else if (list->sb->r < len_t * 48 / 100 && list->sb->r >= len_t * 33
				/ 100)
 		{
 			if (ft_last_ranking(list->sb) < list->sb->r
 				&& ft_last_ranking(list->sb) >= len_t * 33 / 100)
 				ft_bbot(list, 2,0);
 			else
			 				ft_rotate(&list->sb, 2);
		}
		else if(ft_last_ranking(list->sa)!= len_t && list->sa->r != len_t - len_a)
			ft_sort_time_is_no_sort(list,len_t);
			 		if (list->sb->r == len_t - len_a)
 		{
 			ft_push(&list->sa, &list->sb, 1);
 			len_a++;
 		}
		else if (ft_last_ranking(list->sa) == len_t - len_a)
		{
			ft_rrotate(&list->sa, 1);
			len_a++;
		}
 		else if (list->sb->r > len_t * 48 / 100)
 		{
 			ft_push(&list->sa, &list->sb, 1);
 		}
		else
			ft_rotate(&list->sa,1);
 	}
 }
 void	ft_sort_endp3(t_all *list, int len_t)
 {
 	int len_a;
 	len_a = ft_lst_range(list->sa);
 	while (list->sb)
 	{
 		if (list->sb->r == len_t - len_a)
 		{
 			ft_push(&list->sa, &list->sb, 1);
 			len_a++;
 		}
			else if (ft_last_ranking(list->sa) == len_t - len_a)
		{
			ft_rrotate(&list->sa, 1);
			len_a++;
		}
 		else
		{
			ft_google(list,len_t,len_a);
			len_a++;
		}
 	} 
 }