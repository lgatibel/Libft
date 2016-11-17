/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatibel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:31:06 by lgatibel          #+#    #+#             */
/*   Updated: 2016/11/17 12:44:45 by lgatibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <error.h>
#include <libft.h>

void			error(int error, int line, char *file)
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
		tmp = str;
		str = ft_strjoin(str, "at line : ");
		free(tmp);
		ft_putstr(str);
		ft_putnbr(line);
		free(str);
	}
}
