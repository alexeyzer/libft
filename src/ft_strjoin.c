/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:00:23 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/16 19:00:25 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int 	i;
	int		j;
	char	*memstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	memstr = ft_strnew(i + j);
	if (memstr == NULL)
		return (NULL);
	ft_strclr(memstr);
	i = 0;
	while (s1[i] != '\0')
	{
		memstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		memstr[i] = s2[j];
		i++;
		j++;
	}
	return (memstr);
}