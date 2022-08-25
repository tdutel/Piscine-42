/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:05:09 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/14 10:57:20 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	nbr;
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	nbr = nb * ft_recursive_power(nb, power - 1);
	return (nbr);
}
