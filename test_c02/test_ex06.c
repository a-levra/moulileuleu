#include<unistd.h>
void	ft_putnbr(int nb);

int ft_str_is_printable(char *str);
int	main(int argc, char **argv)
{
	int i;
	for(i=0;i < 300;i++)
	{
		ft_putnbr(ft_str_is_printable(i));
	}

	return (0);
}




void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		c = '0' + nb;
		write(1, &c, 1);
	}
}
