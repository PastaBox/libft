/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 23:08:32 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/12 16:36:09 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	d;
	size_t			i;

	i = 0;
	s1 = (unsigned char*)s;
	d = (unsigned char)c;
	while (n--)
	{
		if (s1[i] == d)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
