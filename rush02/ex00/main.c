/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:33:43 by ngennaro          #+#    #+#             */
/*   Updated: 2022/08/21 14:10:16 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "main.h"
#define MAX_NUMBER (37)

int	print_error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2 && argc != 3)
		return (print_error());
	while (argv[argc - 1][i])
	{
		if ('0' <= argv[argc - 1][i] && argv[argc - 1][i] <= '9')
			i++;
		else
			return (print_error());
	}
	if (i > MAX_NUMBER)
		return (print_error());
	convert_number(argv[argc - 1]);
}
