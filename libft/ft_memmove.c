/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:57:42 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/12 16:55:01 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*bufsrc;
	char		*bufdst;

	bufsrc = (const char *)src;
	bufdst = (char *)dst;
	if (bufsrc <= bufdst)
	{
		bufsrc += len - 1;
		bufdst += len - 1;
		while (len > 0)
		{
			*bufdst = *bufsrc;
			len--;
			bufsrc--;
			bufdst--;
		}
	}
	else
		return (ft_memcpy(bufdst, bufsrc, len));
	return (dst);
}
