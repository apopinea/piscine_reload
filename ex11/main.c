/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:51:53 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 12:48:28 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_putchar(char c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int a;
	int b;
	int div;
	int mod;

	if (argc == 3)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		ft_div_mod(a, b, &div, &mod);
		ft_putnbr(a);
		ft_putstr(" / ");
		ft_putnbr(b);
		ft_putstr(" = ");
		ft_putnbr(div);
		ft_putchar('\n');
		ft_putnbr(a);
		ft_putstr(" % ");
		ft_putnbr(b);
		ft_putstr(" = ");
		ft_putnbr(mod);
		ft_putchar('\n');
	}
	else
		ft_putstr("Erreur, 2 argument.\n");
	return (0);
}
