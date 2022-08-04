#include<unistd.h>
void	ft_putnbr(int nb);
int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	ft_putnbr(0);
	return (0);
}
