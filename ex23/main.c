/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:51:53 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 15:58:23 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_point.h"

void	ft_putchar(char c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point point;

	set_point(&point);
	ft_putstr("x = ");
	ft_putnbr((point.x));
	ft_putstr("\ny = ");
	ft_putnbr((point.y));
	ft_putchar('\n');
	return (0);
}
