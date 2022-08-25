/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:32:43 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/19 13:37:48 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_sumlen(int size, char **strs)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (i < size)
	{
		sum += ft_strlen(strs[i]);
		i++;
	}
	return (sum);
}

void	ft_sep(char *sep, char *new, int *j)
{
	int	k;

	k = 0;
	while (sep[k])
	{
	new[*j] = sep[k];
	k++;
	*j += 1;
	}
}

char	*ft_init_test(int *i, int *j, int size, char *new)
{
	*i = 0;
	*j = 0;
	if (size == 0)
	{
		new[0] = '\0';
		return (new);
	}
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		i;
	int		j;
	int		k;

	ft_init_test(&i, &j, size, new = NULL);
	k = ft_sumlen(size, strs);
	new = malloc(sizeof(*new) * (k + (size - 1) * ft_strlen(sep)) + 1);
	if (new == NULL)
		return (NULL);
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
		{
			new[j] = strs[i][k];
			k++;
			j += 1;
		}
		if (i + 1 != size)
			ft_sep(sep, new, &j);
		i++;
	}
	new[j] = '\0';
	return (new);
}
