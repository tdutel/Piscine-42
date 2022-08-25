/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:11:00 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/13 13:06:50 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		else
			i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_swap(char **s1, char **s2)
{
	char	*tmp[1000];

	*tmp = *s1;
	*s1 = *s2;
	*s2 = *tmp;
	return (0);
}

void	ft_print_res(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		c;

	c = 0;
	i = 1;
	j = i + 1;
	while (c < argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			i++;
			j++;
		}
		c++;
		i = 1;
		j = i + 1;
	}
	ft_print_res(argc, argv);
	return (0);
}
