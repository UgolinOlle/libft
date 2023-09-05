/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugolin-olle <ugolin-olle@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:55:34 by ugolin-olle       #+#    #+#             */
/*   Updated: 2023/08/30 23:03:49 by ugolin-olle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	s1_len;
	char	*res;

	if (!s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	i = 0;
	res = (char *)malloc(s1_len + 1);
	while (i < s1_len)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
