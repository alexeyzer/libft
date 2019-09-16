/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 21:10:54 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/10 20:10:07 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	j;
	int		speclen;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[j] != '\0')
	{
		i = 0;
		if (needle[i] == haystack[j])
		{
			speclen = j;
			while (needle[i] == haystack[j] && (j < len))
			{
				if (needle[i+ 1] == '\0')
					return ((char*)&haystack[speclen]);
				i++;
				j++;
			}
			j = speclen;
		}
		j++;
	}
	return (NULL);
}