/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:44:37 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/24 18:01:04 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_nbr(char *str, char *charset)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		if (!ft_in_charset(str[i], charset)
			&& (ft_in_charset(str[i + 1], charset)
				|| !str[i + 1]))
			nbr++;
		i++;
	}
	return (nbr);
}

int	ft_len(char *str, char *charset)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (ft_in_charset(str[i], charset))
			return (i);
		i++;
	}
	return (i);
}

void	ft_splitnwrite(char **dest, char *str, char *charset, int nbr)
{
	int		i;
	int		j;
	int		len;
	char	*temp;

	i = 0;
	while (i < nbr)
	{
		while (ft_in_charset(*str, charset))
			str++;
		if (!ft_in_charset(*str, charset))
		{
			len = ft_len(str, charset);
			temp = malloc(sizeof(char) * (len + 1));
			j = 0;
			while (j < len)
				temp[j++] = *str++;
			temp[j] = '\0';
			dest[i] = temp;
		}
		i++;
	}
	dest[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		nbr;

	nbr = ft_check_nbr(str, charset);
	dest = malloc(sizeof(char *) * (nbr + 1));
	if (!dest)
		return (0);
	ft_splitnwrite(dest, str, charset, nbr);
	return (dest);
}
