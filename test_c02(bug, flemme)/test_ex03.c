#include<unistd.h>
void	ft_putnbr(int nb);

int	ft_str_is_numeric(char *str);
int	main()
{

	ft_putnbr(ft_str_is_numeric("04534534"));
	ft_putnbr(ft_str_is_numeric("9"));
	ft_putnbr(ft_str_is_numeric("9234534534h"));
	ft_putnbr(ft_str_is_numeric("asgsd454"));
	ft_putnbr(ft_str_is_numeric("A"));
	ft_putnbr(ft_str_is_numeric("\?"));
	ft_putnbr(ft_str_is_numeric(" "));

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
