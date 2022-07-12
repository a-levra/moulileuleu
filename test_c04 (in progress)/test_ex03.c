/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdurand <grdurand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:18:39 by grdurand          #+#    #+#             */
/*   Updated: 2022/07/13 00:22:26 by grdurand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char const *argv[])
{
	char threeArray[] = "  ---+--+1234ab567";
	char threeArrayA[] = "    ---+-+--+12345ab567";

	printf("%i", ft_atoi(threeArray));
	printf("%i", ft_atoi(threeArrayA));

	return (0);
}
