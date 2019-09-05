/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:39:38 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/05 20:39:39 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void *memccpy (void *destination, const void *source, int c, size_t n);
{
	char	*a;
	char	*b;
	int		i;

	i = 0;
	a = (char*)destination;
	b = (char*)source;
	while(n-- > 0)
	{
		if (b[i] == (char)c)
			return 
		a[i] = b[i];
		i++;
	}
	return (a);
}

int		main()
{
	char *a;
	char *b;

	a = (char*)malloc(sizeof(char)*5);
	b = (char*)malloc(sizeof(char)*1000);
	memset(b,'c',1000);
	b[0] = 'q';
	b[1] = 'w';
	write(1, a, 1000);
	write(1, "\n", 1);
	ft_memcpy(a,b,1000);
	write(1, a, 1000);
	write(1, "\n", 1);

	write(1, b, 1000);

	
	
	/*printf("\n");
	i = 0;
	while(i< 6)
	{
		printf("%c",b[i]);
		i++;
	}
	*/
	//printf("%s\n",b);
	return (0);
	}