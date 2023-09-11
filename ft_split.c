/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugolin-olle <ugolin-olle@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:34:46 by ugolin-olle       #+#    #+#             */
/*   Updated: 2023/09/08 21:37:14 by ugolin-olle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlen(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	tmp;

	count = 0;
	tmp = 0;
	while (*s)
	{
		if (*s == c)
			tmp = 0;
		else if (!tmp)
		{
			tmp += 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	count;
	size_t	wlen;
	size_t	i;

	count = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (count + 2));
	if (!*s && (res == NULL))
		return (res);
	i = 0;
	while (count--)
	{
		while (*s == c)
			s++;
		wlen = 0;
		while (s[wlen] && s[wlen] != c)
			wlen++;
		res[i] = ft_substr(s, 0, wlen);
		if (wlen > 0 && !res[i])
			return (res);
		i++;
		s += wlen;
	}
	res[i] = NULL;
	return (res);
}
