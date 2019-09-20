/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexzudin <alexzudin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:08:04 by alexzudin         #+#    #+#             */
/*   Updated: 2019/09/20 12:36:58 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *s;

	s = NULL;
	s = ft_itoa(n);
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
}
