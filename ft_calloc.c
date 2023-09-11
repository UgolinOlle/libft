/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugolin-olle <ugolin-olle@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:09:49 by ugolin-olle       #+#    #+#             */
/*   Updated: 2023/09/11 08:26:23 by ugolin-olle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = (void *)malloc(count * size);
	if (res == 0)
		return (res);
	ft_bzero(res, count * size);
	return (res);
}

// int	main(void)
// {
// 	printf("RESULT: %zu", ft_calloc(10, 10));
// 	retrun (0);
// }
