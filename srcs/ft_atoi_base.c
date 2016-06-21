/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatibel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:27:52 by lgatibel          #+#    #+#             */
/*   Updated: 2016/06/21 12:53:21 by lgatibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_base(char str, int base)
{
	static char		tab_maj[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', 'A', 'B', 'C', 'D', 'E', 'F'};
	static char		tab_min[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', 'a', 'b', 'c', 'd', 'e', 'f'};
	int				i;

	i = -1;
		while (tab_min[++i] && i < base)
			if (str == tab_min[i] || str == tab_maj[i])
				return (i);
		return (-1);
}

static int		ft_calc(const char *str, int i, int base)
{
	int		n;
	int		pow;
	int		tmp;

	n = 0;
	i -= 1;
	pow = -1;
	while (ft_isdigit(str[++i]) && ++pow <  32)
	{
		if((tmp = ft_base(str[i], base)) == -1)
			break ;
		n += (ft_power(base, pow)) * tmp;
	}
	return (n);
}

static int		ft_is_space(const char *str)
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

int				ft_atoi_base(const char *str, int base)
{
	int	i;
	int	sign;

	i = -1;
	sign = 1;
	while (str[++i])
	{
		if (ft_isdigit(str[i]))
			return (sign * ft_calc(str, i, base));
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
