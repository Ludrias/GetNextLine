/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:35:23 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/11 13:28:04 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	idst;
	size_t	isrc;

	idst = ft_strlen(dst);
	isrc = ft_strlen(src);
	if (size <= idst)
		return (size + isrc);
	if (isrc < size - idst)
	{
		ft_memcpy(dst + idst, src, isrc);
		dst = dst + idst + isrc;
	}
	else
	{
		ft_memcpy(dst + idst, src, size - idst - 1);
		dst = dst + size - 1;
	}
	*dst = '\0';
	return (idst + isrc);
}
