/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:07:40 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/12 17:03:24 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*ret;

	i = 0;
	if (s == NULL)
		return (NULL);
	while ((*s == ' ' || *s == '\n' || *s == '\t') && (*s != '\0'))
		s++;
	len = ft_strlen(s);
	if (len > 1)
		while ((s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
				&& (s[len - 1] != '\0'))
			len--;
	ret = (char *)malloc((len + 1) * sizeof(char));
	while (i < len && s[i] != '\0')
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
