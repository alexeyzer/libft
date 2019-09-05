/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 21:10:54 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/03 21:10:55 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char*)s;
	if(n < 1)
		return ;
	while (n-- > 0)
		*str++ = 0;
}

int		main()
{
	char *a;
	char *b;

	a = (char*)malloc(sizeof(char)*6);
	b = (char*)malloc(sizeof(char)*6);
	memset(a,'a',5);
	memset(b,'c',5);
	ft_bzero(a,1);
	ft_bzero(b,1);
	printf("%c",a[0]);
	//printf("%s\n",b);
	
	
	return (0);
}