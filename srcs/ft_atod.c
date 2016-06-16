/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatibel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:27:52 by lgatibel          #+#    #+#             */
/*   Updated: 2016/06/16 17:13:45 by lgatibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double		ft_calc(const char *str, int i)
{
	double	n;
	int		nd;
	char	*decimal;

	n = 0;
	nd = 0;
	i -= 1;
	while (ft_isdigit(str[++i]))
		n = (n * 10) + str[i] - 48;
	if (str[i] && str[i] == '.')
	{
		decimal = ft_strdup(&str[i + 1]);
		i = 0;
		while (ft_isdigit(decimal[i]))
			++i;
		i = (i > 6) ? 6 : i;
		decimal[i] = '\0';
		n += ((double)ft_atoi(decimal) / (double)ft_power(10, i));
		ft_strdel(&decimal);
	}
	return (n);
}

static int			ft_is_space(const char *str)
{
	char	tab[5];
	int		index;

	tab[0] = '\n';
	tab[1] = '\t';
	tab[2] = '\v';
	tab[3] = '\r';
	tab[4] = '\f';
	index = 0;
	while (tab[index] != str[0])
		index++;
	if (!tab[index] && !ft_isdigit(str[0]) && (str[0] != '-' &&
		str[0] != '+'))
		return (0);
	return (1);
}

double				ft_atod(const char *str)
{
	int			i;
	double		sign;

	i = -1;
	sign = 1;
	while (str[++i])
	{
		if (ft_isdigit(str[i]))
			return (sign * ft_calc(str, i));
		if (str[i] == '-' || str[i] == '+')
		{
			if (!ft_isdigit(str[i + 1]))
				return (0);
			sign = 44 - str[i];
		}
		else if (!ft_is_space(&str[i]))
			return (0);
	}
	return (0);
}
