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
#include <stdio.h>
int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}