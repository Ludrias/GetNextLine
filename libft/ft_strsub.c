/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 12:49:07 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/10 12:53:46 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	ret = NULL;
	if (s != NULL)
	{
		i = 0;
		ret = (char *)malloc(len * sizeof(char));
		if (ret == NULL)
			return (ret);
		while (i < len)
		{
			ret[i] = s[start];
			i++;
			start++;
		}
	}
	return (ret);
}
