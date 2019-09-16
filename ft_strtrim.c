/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:48:37 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/16 19:48:41 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	size_t		i;
	size_t		first;
	size_t		spec;
	char 	*memstr;

	i = 0;
	first = 0;
	if (s == NULL)
		return (NULL);
	spec = ft_strlen(s) - 1;
	while (s[first] == ' ' || s[first] == '\t' || s[first] == '\n')
		first++;
	while (first < spec && (s[spec] == ' ' || s[spec] == '\t' || s[spec] == '\n'))
		spec--;
	memstr = ft_strnew(spec - first + 1);
	if (memstr == NULL)
		return (NULL);
	while (first < spec + 1)
		memstr[i++] = s[first++];
	return (memstr);
}