/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatibel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 14:21:19 by lgatibel          #+#    #+#             */
/*   Updated: 2016/10/07 09:52:32 by lgatibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_itoa_base(int nbr, int base)
{
	int			i;
	static char	tab_min[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f'};
	char		tab[40];

	i = -1;
	if (nbr < 0 && base == 10)
	{
		tab[++i] = '-';
		nbr = -nbr;
	}
	if (base < 17 && base > 1 && nbr > 0)
	{
		while (nbr)
		{
			tab[++i] = tab_min[nbr % base];
			nbr /= base;
		}
	}
	else
		tab[++i] = '0';
	tab[++i] = '\0';
	return (ft_strdup(ft_reverse_tab(tab, 0, --i)));
}
