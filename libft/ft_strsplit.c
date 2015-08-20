/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdoose <qdoose@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:44:02 by qdoose            #+#    #+#             */
/*   Updated: 2014/11/12 17:02:30 by qdoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_strsplit_loop(char **tab, char const *s, char c)
{
	int		i;
	char	*pos;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			pos = (char*)s;
			while (*s != c && *s != '\0')
				s++;
			tab[i] = ft_strsub(pos, 0, s - pos);
			i++;
		}
	}
	tab[i] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) + 1));
	if (tab == NULL)
		return (NULL);
	ft_strsplit_loop(tab, s, c);
	return (tab);
}
