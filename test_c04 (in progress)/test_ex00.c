/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdurand <grdurand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:18:14 by alevra            #+#    #+#             */
/*   Updated: 2022/07/13 00:21:20 by grdurand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	int	a;

	a = ft_strlen("Les worms, quand il y en a un, ça va ... C'est quand il y en a plusieurs qu'il y a des problèmes !");
	ft_putnbr(a);
	return (0);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
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
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}	
	else
	{
		ft_putchar(nb + 48);
	}
}
