/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:15:03 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/21 18:51:49 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

void	ft_putstr(char *str);
void	ft_count2(int fd, int ret, char *buf, char *new);

int	id_file(int argc, char **argv)
{
	int	x;

	if (argc == 3)
	{
		x = (open(argv[1], O_RDONLY | O_CREAT));
		if (x == -1)
		{
			ft_putstr("Dict Error\n");
			return (0);
		}
		return (x);
	}
	else
	{
		x = (open("numbers.dict", O_RDONLY));
		if (x == -1)
		{
			ft_putstr("Dict Error\n");
			return (0);
		}
		return (x);
	}
}

void	count(int argc, char *argv)
{
	int		ret;
	int		fd;
	char	buf[1];
	char	*new;

	fd = id_file(argc, &argv);
	ret = read(fd, buf, 1);
	ft_count2(fd, ret, buf, new);
}

void	ft_count2(int fd, int ret, char *buf, char *new)
{
	int	i;
	int	c;
	int	l;

	i = 0;
	c = 0;
	l = 0;
	while (ret)
	{
		ret = read(fd, buf, 1);
		c++;
	}
	new = malloc(sizeof(*new) * (c + 1));
	while (i < c)
	{
		new[i] = buf[i];
		i++;
	}
	while (new[i])
	{
		if (new[i] == '\n')
			l++;
		i++;
	}
}

typedef struct t_dict
{
	char	key[28];
	char	value[100];
}	t_dict;

int	main(int argc, char **argv)
{
	count(argc, argv[1]);
	return (0);
}

/*
i = 0;
while (i < l - 1)
{
	while str_comp((tab[i],  s_tab[j].key)
			j++;
	if str_comp(tab[i], s_tab[j].key) == 0;	
// compare tab de noe avec le key de l'element de tableau de structure
			newnew[i] = s_tab[j].value
	i++;
		
		if struct1.nb == 1
			return struct1.value
*/
