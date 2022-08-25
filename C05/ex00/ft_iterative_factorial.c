/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:36:50 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/14 10:29:36 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nbr;

	if (nb < 0 || nb > 19)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	nbr = nb;
	while (i < nb)
	{
		nbr = nbr * i;
		i++;
	}
	return (nbr);
}
