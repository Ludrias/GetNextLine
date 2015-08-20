/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:02:01 by qdoose            #+#    #+#             */
/*   Updated: 2015/01/10 07:33:51 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	n_find;

	i = 0;
	n_find = ft_strlen(s2);
	if (n_find == 0)
		return ((char *)s1);
	while (s1[i] != '\0' && ft_strncmp(s1 + i, s2, n_find) != 0)
		i++;
	if (s1[i] == '\0')
		return (NULL);
	return ((char *)s1 + i);
}
