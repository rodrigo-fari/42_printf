/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42poto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:33:02 by rde-fari          #+#    #+#             */
/*   Updated: 2024/05/16 13:57:20 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		total;

	va_start(ap, format);
	total = 0;
	ft_check_char(format, ap, &total);
	return (total);
}
