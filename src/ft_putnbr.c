/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexzudin <alexzudin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:54:30 by alexzudin         #+#    #+#             */
/*   Updated: 2019/09/18 19:57:20 by alexzudin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(int n)
{
	char *s;

	s = NULL;
	s = ft_itoa(n);
	if (s == NULL)
		return;
	ft_putstr(s);
}