#include<unistd.h>
#include <string.h>

void	ft_putstr(char *str);
int ft_str_is_printable(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putchar(char c);
void	ft_putstr_non_printable(char *str);

int	main()
{
	int	a;
	char NUMBERS[7]="012345\0";
	char LETTERS[7]="aaaaaa\0";
	ft_putstr("src : ");
	ft_putstr(NUMBERS);

	ft_putstr("-dest : ");
	ft_putstr(LETTERS);
	a = (ft_strlcpy(LETTERS,NUMBERS,3));
	ft_putchar('\n');
	
	ft_putstr("|src : ");
	ft_putchar(NUMBERS[0]);
	ft_putchar(NUMBERS[1]);
	ft_putchar(NUMBERS[2]);
	ft_putchar(NUMBERS[3]);
	ft_putchar(NUMBERS[4]);
	ft_putchar(NUMBERS[5]);
	ft_putchar(NUMBERS[6]);

	ft_putstr("-dest : ");
	ft_putchar(LETTERS[0]);
	ft_putchar(LETTERS[1]);
	ft_putchar(LETTERS[2]);
	ft_putchar(LETTERS[3]);
	ft_putchar(LETTERS[4]);
	ft_putchar(LETTERS[5]);
	ft_putchar(LETTERS[6]);

	return (0);
}


void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
