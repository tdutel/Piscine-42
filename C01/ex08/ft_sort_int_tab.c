/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:46:29 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/08 12:15:14 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int i, int j)
{
	int	tmp;

	tmp = tab[i];
	tab[i] = tab[j];
	tab[j] = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	min;
	int	j;

	i = 0;
	j = 1;
	while (i <= size - 1)
	{
		min = i;
		while (j <= size - 1)
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
			j++;
		}
		if (min != i)
		{
			ft_swap(tab, i, min);
		}
		i++;
		j = i + 1;
	}
}
