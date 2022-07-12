export prog
export i

prog=ft_print_alphabet
i=1


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


	gcc ex0"$i"/"$prog".c test_ex0"$i".c
	echo `./a.out` > ex0"$i"_result
	

done