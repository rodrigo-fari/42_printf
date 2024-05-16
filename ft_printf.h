/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:58:31 by rde-fari          #+#    #+#             */
/*   Updated: 2024/05/16 14:02:54 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

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

void	ft_putnbr_fd(int n, int fd);
void	ft_putncount(char a, int *total);
void	ft_strncount(char *string, int *total);
void	ft_unsint(unsigned int num, int *total);
void	ft_intncount(va_list ap, char format, int *total);
void	ft_ptrhex(char format, unsigned long num, int *total);
void	ft_hexapplier(char format, unsigned long num, int *total);
void	ft_check_char(const char *format, va_list ap, int *total);

//---------End If---------//
#endif
