/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:28:44 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/12 16:59:47 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	i = ft_strlen(s1) + 1;
	s2 = (char *)malloc(i * sizeof(char));
	ft_strcpy(s2, s1);
	s2[i] = '\0';
	return (s2);
}
