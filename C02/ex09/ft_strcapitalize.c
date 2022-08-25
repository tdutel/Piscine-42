/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:02:11 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/10 16:13:57 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_init_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (&*str);
}

char	ft_str_up_low_case(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	else
	{
		if (c >= 'A' && c <= 'Z')
		c = c + 32;
	}
	return (c);
}

int	ft_alphanumeric(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= '0' && c <= '9')
		return (3);
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	alpha;
	int	alphai;

	*str = *ft_init_lowcase(str);
	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = ft_str_up_low_case(str[0]);
	while (str[i])
	{
		alphai = ft_alphanumeric(str[i - 1]);
		alpha = ft_alphanumeric(str[i]);
		if (alphai == 0)
			if (alpha != 0)
				if (alpha == 2)
					str[i] = ft_str_up_low_case(str[i]);
		i++;
	}
	return (str);
}
