/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:54:57 by eros-gir          #+#    #+#             */
/*   Updated: 2022/11/01 16:18:01 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../incl/pslib.h"

int	ft_set_size(t_stks *lists, int *j)
{
	int	i;

	i = 20;
	*j = -1;
	while (i >= 0)
	{
		lists->chunk[i] = 9999999999;
		i --;
	}
	if (lists->size_a < 20)
		return (lists->size_a);
	else
		return (20);
}

int	ft_check_chunk(t_stks *lists)
{
	int	size;
	int	i;
	int	j;
	int	k;

	size = ft_set_size(lists, &j);
	while (++j <= size)
	{
		i = -1;
		while (++i < lists->size_a)
		{
			k = 20;
			while (--k >= 0)
			{
				if (lists->chunk[k] == lists->a[i])
					break ;
			}
			if (lists->chunk[j] > lists->a[i])
				lists->chunk[j] = lists->a[i];
		}
	}
	return (size);
}

void	ft_set_hold_top(t_stks *lists, int size)
{
	int	i;
	int	j;

	j = 0;
	lists->hold_top = ft_look_for_nbr(lists, 1);
	while (j <= lists->size_a / 2)
	{
		i = size;
		while (i >= 0)
		{
			if (lists->chunk[i] == lists->a[j])
			{
				lists->hold_top = lists->chunk[i];
				j = lists->size_a;
				break ;
			}	
			i --;
		}
		j ++;
	}
}

void	ft_set_hold_bottom(t_stks *lists, int size)
{
	int	i;
	int	j;

	j = lists->size_a;
	lists->hold_bot = ft_look_for_nbr(lists, 1);
	while (j > lists->size_a / 2)
	{
		i = size;
		while (i >= 0)
		{
			if (lists->chunk[i] == lists->a[j])
			{
				lists->hold_bot = lists->chunk[i];
				j = 0;
				break ;
			}	
			i --;
		}
		j --;
	}
}

void	ft_set_game_list(t_stks *lists)
{
	int	i;
	int	j;
	int	result;

	j = -1;
	while (++j < lists->size_a)
	{
		i = -1;
		result = ft_check_list_a(lists, 1);
		while (++i < lists->size_a)
		{
			if (lists->ga[i] == -1 && lists->a[result] > lists->a[i])
				result = i;
		}
		if (result >= 0)
			lists->ga[result] = j;
	}
}
