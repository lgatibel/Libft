/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatibel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:31:06 by lgatibel          #+#    #+#             */
/*   Updated: 2016/11/17 16:16:05 by lgatibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <error.h>
#include <libft.h>

void			error_arg(int required, int arg, int close)
{
	ft_putstr("Wrong number of argument, require ");
	ft_putnbr(required);
	ft_putstr(" instead of");
	ft_putnbr(arg);
	if (close == EXIT)
		exit(2);
}

void			error(int error, int line, char *file, int close)
{
	char	*str;
	char	*tmp;

	str = NULL;
	if (error != 0)
	{
		if (error == MALLOC)
			str = ft_strjoin("Malloc error in file : ", file);
		else if (error == INIT)
			str = ft_strjoin("Init error in file : ", file);
		else if (error == OPEN)
			str = ft_strjoin("Open error in file : ", file);
		else if (error == CLOSE)
			str = ft_strjoin("Close error in file : ", file);
		tmp = str;
		str = ft_strjoin(str, "at line : ");
		free(tmp);
		ft_putstr(str);
		ft_putnbr(line);
		free(str);
	}
	if (close == 1)
		exit(2);
}
