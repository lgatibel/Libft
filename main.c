#include <libft.h>
#include <stdio.h>
#include <stdio.h>

int			main(int ac, char **av)
{
	printf("atoi[%d]\n",atoi(av[1]));
	printf("ft_atoi[%d]\n",ft_atoi_base(av[1], ft_atoi(av[2])));
	return(0);
}
