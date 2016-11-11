#include <error.h>
#include <libft.h>

void			error(char error, char line, char *file)
{
	char *str;
	char *tmp;

	str = NULL;
	if (error != 0)
	{
		if (error == MALLOC)
			str = ft_strjoin("Malloc error in file : ", file);
		else if (error == INIT)
			str = ft_strjoin("Init error in file : ", file);
		tmp = str;
		str = ft_strjoin(str, "at line : ");
		ft_putstr(str);
		ft_putnbr(line);
		write(1, "\n", 1);
		free(str);
		free(tmp);
		if (EXIT == STOP)
			exit(2);
	}
}
