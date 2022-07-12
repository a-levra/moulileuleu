#include<unistd.h>
void	ft_print_combn(int n);
int	main(void)
{
	int	i;
	
	i = 0;
	while(i < 10)
	{
		ft_print_combn(i);
		write(1,"\n\n\n",3);
	}

	return (0);
}
