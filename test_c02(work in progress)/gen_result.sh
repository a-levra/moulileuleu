export prog
export i

prog=ft_print_alphabet
i=1


for i in 00 01 02 03 04 05 06 07 08 09 10 11
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

	rm ex"$i"_result
	gcc ex"$i"/"$prog".c test_ex"$i".c
	echo `./a.out` > ex"$i"_result
	

done