/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 15:22:07 by qdoose            #+#    #+#             */
/*   Updated: 2015/01/10 06:55:40 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*buff;
	t_list	*next;

	if (alst && *alst)
	{
		buff = *alst;
		while (buff)
		{
			next = buff->next;
			del(buff->content, buff->content_size);
			free(buff);
			buff = next;
		}
		*alst = NULL;
	}
}
