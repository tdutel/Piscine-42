/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:24:15 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/21 17:33:40 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"print_int.c"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_fill_struct(char *str, t_dict *name, int x)
{
	int	c;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[x])
	{
		while (str[x] != " " || str[x] != ":")
		{
			name->key[j] = str[x];
			x++;
			j++;
		}
		while (str[x] == " " || str[x] == ":")
			x++;
		j = 0;
		while (str[x] != "\n")
		{
				name->value[j] = str[x]
				x++;
				j++;
		}
		return (t_dict name);
	}
}
