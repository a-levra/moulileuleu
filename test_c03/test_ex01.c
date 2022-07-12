/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:46:05 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/11 18:22:38 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	int	n = 4;
	char *str = "hbashbfasf";
	char *str2 = "hbashbfasf";

	//test00
	if (ft_strncmp(str, str2, n) != strncmp(str, str2, n))
	{
		printf("ft_strncmp : KO :'( \ntest01 failed\n\tft_strncmp returned : %d\n\tstrncmp returned : %d", ft_strncmp(str, str2, n), strncmp(str, str2, n));
		return (0);
	}

	//test01
	n = 4;
	str = "vbadsvhabe";
	str2 = "vbad";
	if (ft_strncmp(str, str2, n) - strncmp(str, str2, n) != 0)
	{
		printf("ft_strncmp : KO :'( \ntest01 failed\n\tft_strncmp returned : %d\n\tstrncmp returned : %d", ft_strncmp(str, str2, n), strncmp(str, str2, n));
		return (0);
	}

	//test02
	n = 4;
	str = "vbad";
	str2 = "vbadsvhabe";
	if (ft_strncmp(str, str2, n) - strncmp(str, str2, n) != 0)
	{
		printf("ft_strncmp : KO :'( \ntest01 failed\n\tft_strncmp returned : %d\n\tstrncmp returned : %d", ft_strncmp(str, str2, n), strncmp(str, str2, n));
		return (0);
	}

	//test03
	n = 12; //n out of bounds
	str = "vadlsb";
	str2 = "dvzxc ";
	if (ft_strncmp(str, str2, n) - strncmp(str, str2, n) != 0)
	{
		printf("ft_strncmp : KO :'( \ntest01 failed\n\tft_strncmp returned : %d\n\tstrncmp returned : %d", ft_strncmp(str, str2, n), strncmp(str, str2, n));
		return (0);
	}

	//test04
	n = 8; //n == size
	str = "afbabdf ";
	str2 = "vcxzvxza";
	if (ft_strncmp(str, str2, n) - strncmp(str, str2, n) != 0)
	{
		printf("ft_strncmp : KO :'( \ntest01 failed\n\tft_strncmp returned : %d\n\tstrncmp returned : %d", ft_strncmp(str, str2, n), strncmp(str, str2, n));
		return (0);
	}
	printf("ft_strncmp : OK");
	return (0);
}
