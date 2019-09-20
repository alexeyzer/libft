/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexzudin <alexzudin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:22:54 by alexzudin         #+#    #+#             */
/*   Updated: 2019/09/18 18:58:47 by alexzudin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int to_count(int n, int *counter, int negative)
{
	int ten;

	ten = 1;
	if (n == 0)
		*counter = 1;
	while (n != 0)
	{
		ten = ten * 10;
		(*counter)++;
		n = (n - (n % ten * ten / ten) * negative);
	}
	return (ten);
}

static void makestr(int n, int negative, char *strmem, int *i)
{
	int counter;

	counter = 0;
	to_count(n, &counter, negative);

	if (negative < 0)
	{
		strmem = ft_strnew( counter + 1);
		strmem[0] = '-';
		*i = 1;
	}
	else
	{
		strmem = ft_strnew(counter);
	}
}

char *ft_itoa(int n)
{
	char	*strmem;
	int		negative;
	int		i;
	int		ten;

	i =0;
	strmem = NULL;
	negative = 1;
	if (n < 0)
		negative = -1;
	ten = to_count(n, &ten, negative ) / 10;
	makestr(n, negative, strmem, &i);
	if (strmem == NULL)
		return (NULL);
	while (n != 0)
	{
		strmem[i] = (negative * (n / ten)) + '0';
		 n = (n - ((n / ten * ten) * negative));
		 ten = ten / 10;
		i++;
	}
	return (strmem);
}