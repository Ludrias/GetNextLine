/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:43:53 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/12 16:54:17 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*bufnoir;
	char		*bufblanc;

	i = 0;
	bufnoir = (char *)dst;
	bufblanc = (char *)src;
	while (i < n)
	{
		if (bufblanc[i] == c)
			return (&bufnoir[i + 1]);
		bufnoir[i] = bufblanc[i];
		i++;
	}
	return (NULL);
}
