# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    moulileuleu.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 16:09:17 by alevra            #+#    #+#              #
#    Updated: 2022/07/07 16:13:40 by alevra           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


export prog

export i

prog=ft_print_alphabet
i=1

# ecrire ici les exos que vous voulez corriger
for i in 0 1 2 3 4 5 6 7
do

	case $i in

	0)
		prog=ft_putchar
		;;

	1)
		prog=ft_print_alphabet
		;;

	2)
		prog=ft_print_reverse_alphabet
		;;

	3)
		prog=ft_print_numbers
		;;

	4)
		prog=ft_is_negative
		;;

	5)
		prog=ft_print_comb
		;;

	6)
		prog=ft_print_comb2
		;;

	7)
		prog=ft_putnbr
		;;

	8)
		prog=ft_print_combn
		;;

	esac
	#execute la norminette
	norminette ex0"$i"/"$prog".c
	#compile le programme avec un main approprié
	gcc ex0"$i"/"$prog".c test_ex0"$i".c
	#enregistre la sortie du user dans un fichier
	echo `./a.out` > "$USER"_ex0"$i"
	#controle la différence entre la sortie du user et un fichier de reference (depend du main)
	diff  "$USER"_ex0"$i" ex0"$i"_result > ex0"$i".diff
	if [ -s ex0"$i".diff ] 
	then
		echo "$prog KO !"
		cat ex0"$i".diff
	else
		echo "$prog OK !"
	fi
done