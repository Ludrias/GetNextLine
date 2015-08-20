/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:55:15 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/10 11:44:18 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem;
	int		*bufmem;

	i = 0;
	mem = (void *)malloc(size * sizeof(void));
	if (mem == NULL)
		return (NULL);
	bufmem = (int *)mem;
	while (i < size)
	{
		bufmem[i] = 0;
		i++;
	}
	return (mem);
}
