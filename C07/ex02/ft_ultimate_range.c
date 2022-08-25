/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:23:13 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/19 11:05:40 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*new;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	new = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		new[i] = min;
		i++;
		min++;
	}
	range[0] = new;
	if (!new)
		return (-1);
	return (i);
}
