/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdurand <grdurand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:22:52 by grdurand          #+#    #+#             */
/*   Updated: 2022/07/13 00:41:42 by grdurand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base);

int	main(int argc, char const *argv[])
{
	char base1[] = "01";
	char base2[] = "0123456789";
	char base3[] = "poneyvif";

	ft_putnbr_base(-42, base1);
	ft_putnbr_base(42, base1);

	ft_putnbr_base(-42, base2);
	ft_putnbr_base(42, base2);
	
	ft_putnbr_base(-42, base3);
	ft_putnbr_base(42, base3);


	return 0;
}
