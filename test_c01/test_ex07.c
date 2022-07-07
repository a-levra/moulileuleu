/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:18:14 by alevra            #+#    #+#             */
/*   Updated: 2022/07/07 20:47:47 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
void	ft_rev_int_tab(int *tab, int size);
//by bpommeau, merci a toi

int	main(int argc, char **argv)
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	i = 0;
	ft_rev_int_tab(tab, 10);
	while(i < 10)  
		{   
			printf("%d\n", tab[i]); 
			i++; 
		}
	return (0);
}

