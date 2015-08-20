/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:50:35 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/10 17:37:20 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *src, int c, size_t len)
{
	unsigned char	*bufs;

	bufs = (unsigned char *)src;
	while (len > 0)
	{
		if (*bufs == (unsigned char)c)
			return ((void *)(bufs));
		len--;
		bufs++;
	}
	return (NULL);
}
