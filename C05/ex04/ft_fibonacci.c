/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:51:28 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/14 15:24:00 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else
	{
		if (index == 1)
			return (1);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
