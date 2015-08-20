/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 17:07:20 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/12 17:07:33 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*new;

	new = NULL;
	if (s != NULL && f != NULL)
	{
		i = 0;
		len = ft_strlen(s) + 1;
		new = (char*)malloc(len * sizeof(char));
		if (new == NULL)
			return (NULL);
		while (s[i])
		{
			new[i] = (*f)(s[i]);
			i++;
		}
	}
	return (new);
}
