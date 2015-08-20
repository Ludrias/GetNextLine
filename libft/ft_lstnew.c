/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 14:46:53 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/11 15:21:24 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*vache_male;

	new = (void *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	if (content != NULL)
	{
		vache_male = (void *)malloc(sizeof(content_size));
		ft_memcpy(vache_male, content, content_size);
		new->content = vache_male;
		new->content_size = content_size;
	}
	else
	{
		new->content = NULL;
		new->content_size = 0;
	}
	new->next = NULL;
	return (new);
}
