/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdurand <grdurand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:16:52 by grdurand          #+#    #+#             */
/*   Updated: 2022/07/13 00:20:41 by grdurand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	ft_putnbr(0);
	return (0);
}
