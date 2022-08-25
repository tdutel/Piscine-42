/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:57:08 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/08 11:29:10 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	ind;

	ind = size - 1;
	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[ind - i];
		tab[ind - i] = tmp;
		i++;
	}
}
