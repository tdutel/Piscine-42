/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:28:38 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/15 11:57:52 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	c;
	int	i;

	if (min >= max)
	{
		new = NULL;
		return (new);
	}
	c = 0;
	while (min + c < max)
		c++;
	i = 0;
	new = malloc(sizeof(*new) * c);
	while (min + i < max)
	{
		new[i] = min + i;
		i++;
	}
	return (new);
}
