/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 20:38:27 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/13 18:34:44 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_count_word(char const *s, char c)
{
	unsigned int	count;
	int				ok;

	count = 0;
	ok = 1;
	while (*s != '\0')
	{
		if (*s == c)
			ok = 1;
		if (*s != c && ok == 1)
		{
			ok = 0;
			count++;
		}
		s++;
	}
	return (count);
}

static int				ft_count_char(char const *s, int start, char c)
{
	unsigned int len;

	len = 0;
	while (s[start] != '\0' && s[start] != c)
	{
		len++;
		start++;
	}
	return (len);
}

char					**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	start;
	char			**str;

	i = 0;
	start = 0;
	if (!(s))
		return (NULL);
	str = (char**)malloc(sizeof(*str) * (ft_count_word(s, c) + 1));
	if (!(str))
		return (NULL);
	if (!(*s))
		str[0] = 0;
	while (i < ft_count_word(s, c))
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		str[i] = ft_strsub(s, start, ft_count_char(s, start, c));
		if (!(str[i]))
			return (NULL);
		i++;
		start = start + ft_count_char(s, start, c);
	}
	str[i] = NULL;
	return (str);
}
