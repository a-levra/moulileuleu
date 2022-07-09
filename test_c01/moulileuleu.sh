# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    moulileuleu.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 16:09:17 by alevra            #+#    #+#              #
#    Updated: 2022/07/09 20:34:15 by alevra           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


export prog

export i

prog=ft_print_alphabet
i=1

# ecrire ici les exos que vous voulez corriger
for i in 0 1 2 3 4 5 6 7 8
do

	case $i in

	0)
		prog=ft_ft
		;;

	1)
		prog=ft_ultimate_ft
		;;

	2)
		prog=ft_swap
		;;

	3)
		prog=ft_div_mod
		;;

	4)
		prog=ft_ultimate_div_mod
		;;

	5)
		prog=ft_putstr
		;;

	6)
		prog=ft_strlen
		;;

	7)
		prog=ft_rev_int_tab
		;;

	8)
		prog=ft_sort_int_tab
		;;

	esac
	#execute la norminette
	#execute la norminette
	echo ------------------------------------------
	echo norminette ex0"$i" : 
	norminette ex0"$i"/"$prog".c
	#compile le programme avec un main approprié
	echo moulileuleu ex0"$i" :
	gcc ex0"$i"/"$prog".c test_ex0"$i".c
	#enregistre la sortie du user dans un fichier
	echo `./a.out` > "$USER"_ex0"$i"
	#controle la différence entre la sortie du user et un fichier de reference (depend du main)
	diff  "$USER"_ex0"$i" ex0"$i"_result > ex0"$i".diff
	if [ -s ex0"$i".diff ] 
	then
		echo "❌❌ KO ! ❌❌"
		cat ex0"$i".diff
	else
		echo "OK !✔️"
	fi
done
