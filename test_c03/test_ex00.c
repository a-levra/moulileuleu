/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajeanno <bajeanno@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:13:33 by bajeanno          #+#    #+#             */
/*   Updated: 2022/07/11 18:22:42 by bajeanno         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *str = "hbashbfasf";
	char *str2 = "hbashbfasf";

	//test00
	if (ft_strcmp(str, str2) != strcmp(str, str2))
	{
		printf("ft_strcmp : KO :'( \ntest01 failed\n\tft_strcmp returned : %d\n\tstrcmp returned : %d", ft_strcmp(str, str2), strcmp(str, str2));
		return (0);
	}

	//test01
	str = "vbadsvhabe";
	str2 = "vbad";
	if (ft_strcmp(str, str2) - strcmp(str, str2) != 0)
	{
		printf("ft_strcmp : KO :'( \ntest01 failed\n\tft_strcmp returned : %d\n\tstrcmp returned : %d", ft_strcmp(str, str2), strcmp(str, str2));
		return (0);
	}

	//test02
	str = "vbad";
	str2 = "vbadsvhabe";
	if (ft_strcmp(str, str2) - strcmp(str, str2) != 0)
	{
		printf("ft_strcmp : KO :'( \ntest01 failed\n\tft_strcmp returned : %d\n\tstrcmp returned : %d", ft_strcmp(str, str2), strcmp(str, str2));
		return (0);
	}

	//test03
	str = "vadlsb";
	str2 = "dvzxc ";
	if (ft_strcmp(str, str2) - strcmp(str, str2) != 0)
	{
		printf("ft_strcmp : KO :'( \ntest01 failed\n\tft_strcmp returned : %d\n\tstrcmp returned : %d", ft_strcmp(str, str2), strcmp(str, str2));
		return (0);
	}

	//test04
	str = "afbabdf ";
	str2 = "vcxzvxza";
	if (ft_strcmp(str, str2) - strcmp(str, str2) != 0)
	{
		printf("ft_strcmp : KO :'( \ntest01 failed\n\tft_strcmp returned : %d\n\tstrcmp returned : %d", ft_strcmp(str, str2), strcmp(str, str2));
		return (0);
	}
	printf("ft_strcmp : OK");
	return (0);
}
