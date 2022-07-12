#include<unistd.h>
void	ft_putnbr(int nb);

int ft_str_is_uppercase(char *str);
int	main()
{

	ft_putnbr(ft_str_is_uppercase("FHDDFGDG"));
	ft_putnbr(ft_str_is_uppercase("A"));
	ft_putnbr(ft_str_is_uppercase("Z"));
	ft_putnbr(ft_str_is_uppercase(""));
	ft_putnbr(ft_str_is_uppercase("a"));
	ft_putnbr(ft_str_is_uppercase("b"));
	ft_putnbr(ft_str_is_uppercase("SDFSDFdfbdfgbKSBVKBFS"));
	ft_putnbr(ft_str_is_uppercase("\?"));
	ft_putnbr(ft_str_is_uppercase(" "));

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
