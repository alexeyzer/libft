/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:   */
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

void	*ft_memmove(void *dst, const void *src, size_t len);
{
	char	*a;
	char	*b;
	int		i;

	i = 0;
	a = (char*)destination;
	b = (char*)source;
	while(n-- > 0 && b++ && a++)
	{
		if (*b == (char)c)
		{
			*a = *b;
			return (a++);
		}
		*a = *b;
		i++;
	}
	return (NULL);
}

int		main()
{
	char *a;
	char *b;
	char *c;

	a = (char*)malloc(sizeof(char)*3);
	b = (char*)malloc(sizeof(char)*3);
	memset(b,'c',3);
	b[1]= 'b';

	if(ft_memccpy(a,b,'c',3) == NULL)
		printf("NO charcter");
	else
	{
		c = ft_memccpy(a,b,'c',3);
		printf("%c", *c);
	}


	
	
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