/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugolin-olle <ugolin-olle@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:43:27 by ugolin-olle       #+#    #+#             */
/*   Updated: 2023/09/05 11:48:29 by ugolin-olle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;

	res = (char *)malloc(ft_strlen(s1) - ft_strlen(set) + 1);
	return (res);
}
