/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 17:47:28 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/12 19:19:47 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;
	t_list *list2;

	list = *alst;
	while (list)
	{
		del(list->content, list->content_size);
		list2 = list->next;
		free(list);
		list = list2;
	}
	*alst = NULL;
}
