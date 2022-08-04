#include<unistd.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

int	main()
{
    char s[2];
    s[1] = 0;
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
    for(char c = 0; c < 127; c++)
    {
        s[0] = c;
        ft_putstr_non_printable(s);
    }
	

	return (0);
}

