/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 12:16:23 by qdoose            #+#    #+#             */
/*   Updated: 2015/01/10 07:02:29 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*begin;

	begin = NULL;
	new = NULL;
	if (lst != NULL && f != NULL)
	{
		while (lst != NULL)
		{
			if (begin == NULL)
			{
				begin = (*f)(lst);
				new = begin;
			}
			else
			{
				new->next = (*f)(lst);
				new = new->next;
			}
			lst = lst->next;
		}
	}
	else
		return (NULL);
	return (begin);
}
