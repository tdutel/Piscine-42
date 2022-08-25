/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:41:46 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/06 12:15:18 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void);
void	fct(char x, char y, char z);

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x < y && y < z && x <= '7' && y <= '8' && z <= '9')
	{
		while (x < y && y < z && y < '8' && z < '9')
		{
			while (x < y && y < z && z < '9')
			{
				fct(x, y, z);
				z++;
			}
			fct(x, y, z);
			y++;
			z = y + 1;
		}
		fct(x, y, z);
		x++;
		y = x + 1;
		z = y + 1;
	}
}

void	fct(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x < '7')
	{
		write(1, ", ", 2);
	}
}
