/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:09:49 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/03 20:22:18 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	unsigned char	*src1;
	unsigned char	*src2;



	i = 0;
	src1 = (unsigned char*)s1;
	src2 = (unsigned char*)s2;

	while (src1[i] == src2[i] && src1[i] != '\0' && src2[i] != '\0')
		i++;
	return (src1[i] - src2[i]);
}