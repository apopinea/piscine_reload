/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:51:53 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 13:57:39 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strlen(char *str);

void	ft_putchar(char c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putstr("\nstrlen = ");
		ft_putnbr(strlen(argv[1]));
		ft_putstr("\nft_strlen = ");
		ft_putnbr(ft_strlen(argv[1]));
		ft_putchar('\n');
	}
	else
		ft_putstr("Erreur, 1 argument.\n");
	return (0);
}
