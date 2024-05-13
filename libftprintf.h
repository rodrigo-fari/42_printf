/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:51:25 by rde-fari          #+#    #+#             */
/*   Updated: 2024/05/13 19:31:41 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

//---------Library----------//
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include "libft/libft.h"

//---------Libftprintf Functions---------//

int		ft_int_len(int num);
int		ft_printf(const char *format, ...);

void	ft_putncount(char a, int *total);
void	ft_strncount(char *string, int *total);
void	ft_intncount(va_list ap, char format, int *total);
void	ft_check_char(const char *format, va_list ap, int *total);

//---------End If---------//
#endif
