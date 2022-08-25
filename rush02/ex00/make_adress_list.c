/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_adress_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:57:41 by ngennaro          #+#    #+#             */
/*   Updated: 2022/08/21 20:00:18 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

#define MAX_CHAR_ON_DICTIONARY (37)

int	len_return(char x, char y)
{
	int	i;

	i = 0;
	if (x != '0')
	{
		i += 2;
	}
	if (y != '0' && y > '1')
	{
		i += 2;
	}
	else if (y != '0')
	{
		i++;
	}
	else
		i++;
	return (i);
}

void	fill_tab(int a, int b, int c, int *tab_return)
{
	int	i;

	i = 0;
	if (a != 0)
	{
		tab_return[i++] = a;
		tab_return[i++] = 100;
	}
	if (b != 0 && b > 1)
	{
		tab_return[i++] = b * 10;
		tab_return[i++] = c;
	}
	else if (b != 0 && c != 0)
		tab_return[i++] = b * 10 + c;
	else if (b != 0)
		tab_return[i++] = b;
	else if (c != 0)
		tab_return[i++] = c;
	tab_return[i++] = -1;
	return ;
}

int	*split_hundred_numbers(char x, char y, char z)
{
	int	a;
	int	b;
	int	c;
	int	*tab_return;

	tab_return = malloc((len_return(x, y) + 1) * sizeof(long long int));
	if (tab_return == NULL)
		return (NULL);
	a = x - '0';
	b = y - '0';
	c = z - '0';
	fill_tab(a, b, c, tab_return);
	return (tab_return);
}

void	general_split_int(int size, int *tab, int ranking, int n)
{
	if (size % 3 == 1)
	{
		tab = split_hundred_numbers('0', '0', number[n]);
		make_request(tab, ranking);
		n++;
	}
	if (size % 3 == 2)
	{
		ranking--;
		tab = split_hundred_numbers('0', number[n], number[n + 1]);
		make_request(tab, ranking);
		n += 2;
	}
	while (n < size)
	{
		ranking--;
		tab = split_hundred_numbers(number[n], number[n + 1], number[n + 2]);
		make_request(tab, ranking);
		n += 3;
	}
}

void	convert_number(char *number)
{
	int	n;
	int	size;
	int	*tab;
	int	ranking;

	size = 0;
	while (number[size])
		size++;
	n = 0;
	ranking = ((size + (size % 3)) / 3);
	general_split_int(size, tab, ranking, n);
	return ;
}
