/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:51:53 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 15:18:47 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		*ft_range(int min, int max);

void	ft_putchar(char c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int a;
	int b;
	int *tab;
	int i;

	if (argc == 3)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		if (!(tab = ft_range(a, b)))
			return (0);
		i = 0;
		while (i < b - a)
		{
			ft_putnbr(tab[i++]);
			ft_putchar(' ');
		}
	}
	else
		ft_putstr("Erreur, 2 argument.\n");
	return (0);
}
