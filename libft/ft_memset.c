/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:02:54 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/12 16:55:18 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*bufnoir;

	i = 0;
	bufnoir = (char *)b;
	while (i < len)
	{
		bufnoir[i] = c;
		i++;
	}
	return (b);
}
