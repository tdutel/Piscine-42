/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:42:57 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/13 13:51:51 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

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

int	check_base(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (len == 0 || len == 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] < 32
			|| base[i] > 127 || base[i] == ' ')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	atoi;
	int	negative;

	atoi = 0;
	negative = 1;
	if (!check_base(base))
		return (0);
	while (*str == '\t' || *str == '\v' || *str == '\n' || *str == '\r'
		|| *str == '\f' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = negative * (-1);
		str++;
	}
	while (is_base(*str, base) >= 0)
	{
	atoi = atoi * ft_strlen(base) + is_base(*str, base);
		str++;
	}
	return (atoi * negative);
}
