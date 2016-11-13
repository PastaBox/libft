/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:12:43 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/12 18:31:36 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t count;
	size_t i;

	i = 0;
	while (dst[i] && i < size)
		i++;
	count = i;
	while (src[i - count] && i < size - 1)
	{
		dst[i] = src[i - count];
		i++;
	}
	if (size > count)
		dst[i] = '\0';
	return (ft_strlen(src) + count);
}
