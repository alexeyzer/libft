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

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	
	int		i;
	char	*a;

	i = 0;
	a = destination;
	while(n-- > 0)
	{
		*((char*)destination++) = *((char*)source++);
	}
	return (a);
}
int		main()
{
	char *a;
	char *b;

	a = (char*)malloc(sizeof(char)*7);
	b = (char*)malloc(sizeof(char)*7);
	b[0] = 'a';
	b[1] = 'b';
	b[2] = 'c';
	b[3] = 'd';
	b[4] = 'e';
	b[5] = 'f';
	b[6] = 'g';
	
	ft_memcpy(b + 3 , b, 5);

	write(1,b,8);




	
	
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