/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:27:07 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 16:58:01 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

int		main(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	ft_putstr("test ft_putstr");
	ft_putchar('\n');
	ft_swap(&a, &b);
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putstr("\nsalut : ");
	ft_putchar(ft_strlen("salut") + '0');
	ft_putchar('\n');
	ft_putstr("ft_strcmp de salut salus : ");
	ft_putchar(ft_strcmp("salut", "salus") + '0');
	return (0);
}
