/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:20:12 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/14 10:47:44 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nbr;
	int	i;

	i = 1;
	nbr = nb;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	while (i < power)
	{
		nbr = nbr * nb;
		i++;
	}
	return (nbr);
}
