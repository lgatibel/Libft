/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatibel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:27:57 by lgatibel          #+#    #+#             */
/*   Updated: 2016/11/17 12:43:18 by lgatibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H
# define UNDEFINED 0
# define MALLOC 1
# define INIT 2
# define OPEN 3

void				error(int error, int line, char *file);
#endif
