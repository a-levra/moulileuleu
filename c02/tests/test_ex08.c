/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:48:01 by alevra            #+#    #+#             */
/*   Updated: 2022/07/11 00:07:36 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char a[] = "g12aSG/eb?1HF		 	  		liba/8SGlw?ieoFD/H+wecj8j578revlia";
	printf("%s\n", ft_strlowcase(a));
}
