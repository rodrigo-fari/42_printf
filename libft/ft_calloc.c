/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:39:36 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/22 13:13:04 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*call;
	size_t	i;

	call = malloc(size * nmemb);
	if (!call)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		call[i] = '\0';
		i++;
	}
	return (call);
}
