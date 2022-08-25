/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:17:42 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/18 16:24:05 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_sep(char *str, char *charset)
{
	int	i;
	int	j;
	int	c;

	j = 0;
	c = 2;
	i = 0;
	while (str[i])
	{
		while (charset[j])
		{
			if (str[i] == charset[j])
				c++;
			j++;
		}
		j = 0;
		i++;
	}
	return (c);
}

char	*ft_ptr(char *str, char *charset, int *i)
{
	int	j;
	int	t;
	int	k;

	j = 0;
	t = 0;
	while (str[t])
	{
		if (str[*i] == '\0')
			return (&str[k]);
		while (charset[j])
		{
			if (str[*i + t] == charset[j])
			{
				k = *i + t + 1;
				*i = k;
				return (&str[k]);
			}
			j++;
		}
		t++;
		j = 0;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**new;
	int		c;
	int		i;
	int		j;

	i = 0;
	j = 1;
	c = ft_sep(str, charset);
	new = malloc(sizeof(*new) * c);
	if (str[0] != '\0')
		new[0] = &str[0];
	while (j + 1 < c)
	{
		new[j] = ft_ptr(str, charset, &i);
		i++;
		j++;
	}
	new[j] = 0;
	return (new);
}
