/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:02:54 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/12 16:03:12 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *tmp;
	char *cpy;

	tmp = NULL;
	cpy = NULL;
	if (s && *s)
	{
		tmp = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		cpy = tmp;
		if (!(tmp))
			return (NULL);
		while (*s)
		{
			*tmp = f(*(char*)s);
			tmp++;
			s++;
		}
		*tmp = '\0';
	}
	return (cpy);
}
