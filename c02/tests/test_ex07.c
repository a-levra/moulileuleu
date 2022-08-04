/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:47:21 by alevra            #+#    #+#             */
/*   Updated: 2022/07/11 12:42:19 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char a[] = "g12aSG/eb?1HFliba/8S		 	  		Glw?ieoFD/H+wecj8j578revlia";
	printf("%s\n", ft_strupcase(a));
}