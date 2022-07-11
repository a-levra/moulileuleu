# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    moulileuleu.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 16:09:17 by alevra            #+#    #+#              #
#    Updated: 2022/07/11 15:47:35 by alevra           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


export prog

export i

prog=ft_print_alphabet
i=1

# ecrire ici les exos que vous voulez corriger
for i in 00 01 02 03 04 05 06 07 08 09 10
do

	case $i in

	00)
		prog=ft_strcpy
		;;

	01)
		prog=ft_strncpy
		;;

	02)
		prog=ft_str_is_alpha
		;;

	03)
		prog=ft_str_is_numeric
		;;

	04)
		prog=ft_str_is_lowercase
		;;

	05)
		prog=ft_str_is_uppercase
		;;

	06)
		prog=ft_str_is_printable
		;;

	07)
		prog=ft_strupcase
		;;

	08)
		prog=ft_strlowcase
		;;

	09)
		prog=ft_strcapitalize
		;;

	10)
		prog=ft_strlcpy
		;;

	11)
		prog=ft_putstr_non_printable
		;;

	esac
	#execute la norminette
	echo ------------------------------------------
	echo norminette ex"$i" : 
	norminette ex"$i"/"$prog".c
	#compile le programme avec un main approprié
	echo moulileuleu ex"$i" :
	gcc -Wall -Wextra -Werror ex"$i"/"$prog".c test_ex"$i".c
	#enregistre la sortie du user dans un fichier
	echo `./a.out` > "$USER"_ex"$i"
	#controle la différence entre la sortie du user et un fichier de reference (depend du main)
	diff  "$USER"_ex"$i" ex"$i"_result > ex"$i".diff
	if [ -s ex"$i".diff ] 
	then
		echo "❌❌ KO ! ❌❌"
		cat ex"$i".diff
	else
		echo "OK !✔️"
	fi
	echo cette moulinette ne corrige que jusqua ex10 (cause flemme) 
done
