/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:24:48 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/16 16:24:50 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char	*memstr;
	size_t	i;

	memstr = NULL;
	i = 0;
	if (size > 0)
		memstr = (char*)malloc(size + 1);
	else
		return (NULL);
	if (memstr == NULL)
		return (NULL);
	while (i < size + 1)
	{
		memstr[i++] = '\0';
	}
	return (memstr);
}