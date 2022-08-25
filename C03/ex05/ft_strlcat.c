/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:23:42 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/11 14:30:03 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				c;
	int				i;
	unsigned int	j;

	i = 0;
	c = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[c])
		c++;
	while (c > 0 && (j < size))
	{
		dest[i] = src[j];
		c--;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (size);
}
