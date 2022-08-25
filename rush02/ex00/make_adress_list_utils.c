/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_adress_list_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:40:56 by ngennaro          #+#    #+#             */
/*   Updated: 2022/08/21 19:56:37 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_CHAR_ON_DICTIONARY (37)

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	a;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < len / 2)
	{
		a = str[i];
		str[i] = str[len - 1];
		str[len - 1] = a;
		i++;
	}
	return (str);
}

char	*itoa(int nb)
{
	char	*str;
	int		nbr;
	int		count;
	int		i;

	i = 0;
	count = 0;
	nbr = nb;
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	make_request(int *tab, int ranking)
{
	int		i;
	char	*request;

	i = 0;
	while (tab[i] != -1)
	{
		request = malloc((MAX_CHAR_ON_DICTIONARY + 1) * sizeof(char));
		if (request == NULL)
			return ;
		ft_strcpy(request, itoa(tab[i]));
		i++;
	}
	i = 0;
	ranking *= 3;
	request = malloc((MAX_CHAR_ON_DICTIONARY + 1) * sizeof(char));
	if (request == NULL)
		return ;
	request[i++] = '1';
	while (ranking > 0)
	{
		request[i++] = '0';
		ranking--;
	}
}
