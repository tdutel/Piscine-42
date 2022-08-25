/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:23:17 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/13 13:28:13 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	convert;

	sign = 1;
	convert = 0;
	i = 0;
	while (str[i])
	{
		while (is_space(str[i]) == 1)
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= (-1);
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			convert = convert * 10 + str[i] - 48;
			i++;
		}
		return (sign * convert);
	}
	return (0);
}
