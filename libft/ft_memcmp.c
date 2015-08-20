/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:04:09 by qdoose            #+#    #+#             */
/*   Updated: 2015/01/10 07:18:21 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	buf1;
	unsigned char	buf2;

	while (len > 0)
	{
		buf1 = *(unsigned char*)str1;
		buf2 = *(unsigned char*)str2;
		if (buf1 != buf2)
			return (buf1 - buf2);
		len--;
		str1++;
		str2++;
	}
	return (0);
}
