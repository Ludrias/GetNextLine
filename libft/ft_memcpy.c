/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:30:45 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/12 16:54:09 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*bufdst;
	char		*bufsrc;

	i = 0;
	bufdst = (char *)dst;
	bufsrc = (char *)src;
	while (i < n)
	{
		bufdst[i] = bufsrc[i];
		i++;
	}
	return (dst);
}
