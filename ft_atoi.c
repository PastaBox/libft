/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:38:34 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/12 19:36:39 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int tmp;
	int ok;

	tmp = 0;
	ok = 1;
	while (*str == ' ' || *str == '\n' || *str == '\f'
			|| *str == '\t' || *str == '\v' || *str == '\r')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		ok = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		tmp = tmp * 10;
		tmp += (*str) - '0';
		str++;
	}
	if (tmp != 0)
		return (tmp * ok);
	return (0);
}
