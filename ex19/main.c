/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:51:53 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 14:09:33 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strcmp(char *s1, char *s2);

void	ft_putchar(char c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_putstr(argv[1]);
		ft_putstr("\n");
		ft_putstr(argv[2]);
		ft_putstr("\nstrcmp = ");
		ft_putnbr(strcmp(argv[1], argv[2]));
		ft_putstr("\nft_strcmp = ");
		ft_putnbr(ft_strcmp(argv[1], argv[2]));
		ft_putchar('\n');
	}
	else
		ft_putstr("Erreur, 2 argument.\n");
	return (0);
}
