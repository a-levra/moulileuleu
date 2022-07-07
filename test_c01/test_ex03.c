/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:18:14 by alevra            #+#    #+#             */
/*   Updated: 2022/07/07 20:19:53 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putnbr(int nb);
void ft_div_mod(int a, int b, int *div, int *mod);

int main(int argc, char **argv)
{
	int a;
	int b;

	int div;
	int mod;

	a = 10;
	b = 5;

	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(a);
	ft_putnbr(b);
	ft_putnbr(div);
	ft_putnbr(mod);

	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
