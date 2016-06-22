/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatibel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/22 13:19:33 by lgatibel          #+#    #+#             */
/*   Updated: 2016/06/22 14:23:13 by lgatibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_str_is_double(char *str)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != '.')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		++i;
	}
	if (str[i] && str[i] != '.')
		return (0);
	else
		++i;
	while (str[i] && ft_isdigit(str[i]))
		++i;
	if (str[i] || i == 0)
		return (0);
	return (1);
}
