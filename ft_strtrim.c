/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugolin-olle <ugolin-olle@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:43:27 by ugolin-olle       #+#    #+#             */
/*   Updated: 2023/09/06 09:18:25 by ugolin-olle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

int	ft_find_char(char str, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == str)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	s;
	size_t	e;

	i = 0;
	s = 0;
	e = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[s] && ft_find_char(s1[s], set))
		s++;
	while (e > s && ft_find_char(s1[e - 1], set))
		e--;
	res = (char *)malloc(sizeof(s1) * e + 1);
	if (!res)
		return (NULL);
	while (e > s)
		res[i++] = s1[s++];
	res[i] = '\0';
	return (res);
}
