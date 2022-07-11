#include<unistd.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main()
{
	char NUMBERS[5]="0123\0";
	char LETTERS[5]="aaaaa";
	
	//printf("%s",NUMBERS);
	//printf("%s",LETTERS);
	
	ft_putstr(ft_strncpy(LETTERS,NUMBERS,1));
	
	//printf("%s",NUMBERS);
	//printf("%s",LETTERS);
	ft_putchar(LETTERS[0]);
	ft_putchar(LETTERS[1]);
	ft_putchar(LETTERS[2]);
	ft_putchar(LETTERS[3]);
	ft_putchar(LETTERS[4]);
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
