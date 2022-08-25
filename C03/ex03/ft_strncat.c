/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:24:33 by tdutel            #+#    #+#             */
/*   Updated: 2022/08/10 13:51:43 by tdutel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
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
	while (c > 0 && (j < nb))
	{
		dest[i] = src[j];
		c--;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
