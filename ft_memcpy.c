/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:59:17 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/12 16:55:29 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	void		*to_return;

	i = 0;
	to_return = dst;
	while (i < n)
	{
		*(char*)dst = *(char*)src;
		dst++;
		src++;
		i++;
	}
	return (to_return);
}
