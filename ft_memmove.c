/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:39:38 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/05 20:39:39 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*a;
	const char		*b;
	int				i;

	i = len;
	a = (char*)dst;
	b = (char*)src;
	if(a == NULL && b == NULL)
		return (NULL);
	while(len-- > 0)
	{
		a[i - 1] = b[i - 1];
		i--;
	}
	return (a);
}