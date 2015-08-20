/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 12:56:14 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/10 13:02:35 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		lens1;
	int		lens2;
	char	*ret;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ret = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	while (i < lens1)
	{
		ret[i] = s1[i];
		i++;
	}
	while (i < lens1 + lens2)
	{
		ret[i] = s2[i - lens1];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
