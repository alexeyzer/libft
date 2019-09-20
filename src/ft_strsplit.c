/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexzudin <alexzudin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:49:50 by alexzudin         #+#    #+#             */
/*   Updated: 2019/09/18 19:35:26 by alexzudin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int to_countwrolds(char const *s, char c)
{
	int	i;
	int counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i + 1] != c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
	return (counter);
}

static void to_countone(char const *s, char c, int *start, int *len)
{
	int	i;

	i = (*start) + (*len);
	(*len) = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			(*start) = i;
			while (s[i] != c && s[i] != '\0')
			{
				(*len)++;
				i++;
			}
			return ;
		}
		i++;
	}
}


char **ft_strsplit(char const *s, char c)
{
	int		i;
	int		start;
	int		len;
	int		countw;
	char	**bigmem;

	bigmem = NULL;
	if (!s)
		return (NULL);
	countw = to_countwrolds(s, c);
	i = 0;
	start = 0;
	len = 0;
	bigmem = (char**)malloc(sizeof(char**) * (countw + 1));
	if (bigmem == NULL || countw == 0)
		return (NULL);
	bigmem[countw] = NULL;
	while (i < countw)
	{
		to_countone(s, c, &start, &len);
		if (!(bigmem[i] = ft_strsub(s, start, len)))
			return (NULL);
		i++;
	}
	return (bigmem);
}