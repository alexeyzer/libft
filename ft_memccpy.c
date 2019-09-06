/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:39:38 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/05 20:39:39 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	char	*a;
	char	*b;
	int		i;

	i = 0;
	a = (char*)destination;
	b = (char*)source;
	while(n-- > 0 && b++ && a++)
	{
		if (*b == (char)c)
		{
			*a = *b;
			return (a++);
		}
		*a = *b;
		i++;
	}
	return (NULL);
}