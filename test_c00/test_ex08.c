#include<unistd.h>
void	ft_print_combn(int n);
int	main(void)
{
	int	i;
	
	i = 1;
	while(i < 10)
	{
		ft_print_combn(i);
		i++;
	}

	return (0);
}
