/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:44:57 by qdoose            #+#    #+#             */
/*   Updated: 2015/05/05 00:56:21 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	n_s2;

	i = 0;
	n_s2 = ft_strlen(s2);
	if (n_s2 == 0)
		return ((char *)s1);
	if (n < n_s2)
		return (NULL);
	while (i < n && n_s2 <= n - i && s1[i] != '\0' &&
			ft_strncmp(s1 + i, s2, n_s2) != 0)
		i++;
	if (s1[i] == '\0')
		return (NULL);
	if (i == n || n_s2 > n - i)
		return (NULL);
	return ((char *)s1 + i);
}
