/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:05:13 by ngennaro          #+#    #+#             */
/*   Updated: 2022/08/21 18:48:58 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>

void	convert_number(char *number);
void	ft_putstr(char *str);
char	*ft_strrev(char *str);
char	*itoa(int nb);
char	*ft_strcpy(char *dest, char *src);
void	make_request(int *tab, int ranking);

typedef struct t_dict
{
	char	key[28];
	char	value[100];
}	t_dict;

#endif
