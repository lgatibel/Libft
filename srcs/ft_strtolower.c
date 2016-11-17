/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatibel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:56:05 by lgatibel          #+#    #+#             */
/*   Updated: 2015/12/17 15:49:36 by lgatibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strtolower(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] > 64 && s[i] < 91)
			s[i] += 32;
		i++;
	}
	return (s);
}
