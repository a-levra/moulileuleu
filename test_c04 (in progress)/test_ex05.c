/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdurand <grdurand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:24:53 by grdurand          #+#    #+#             */
/*   Updated: 2022/07/13 00:40:00 by grdurand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(int argc, char const *argv[])
{
	printf("%s", ft_atoi_base(" 	++-++-2ai6e9+-+gp45e9+", "Blobfishes>All"));
	printf("%s", ft_atoi_base(" 	++-++-2ai6e9+-+gp45e9+", "0123456789abcdef"));
	printf("%s", ft_atoi_base(" 	++-++-101010i6e9+-+gp45e9+", "01"));
	printf("%s", ft_atoi_base(" 	++-++-pvifi6e9+-+gp45e9+", "poneyvif"));
	printf("%s", ft_atoi_base(" 	++-++-0vifi6e9+-+gp45e9+", "0"));

	return 0;
}

