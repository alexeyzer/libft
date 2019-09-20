/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:45:13 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/10 21:11:13 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*src;

	i = 0;
	src = (char*)s;
	while (n > 0)
	{
		if (src[i] == (char)c)
			return (void*)(&src[i]);
		n--;
		i++;
	}
	return (NULL);
}