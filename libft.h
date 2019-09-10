/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 22:55:46 by aguiller          #+#    #+#             */
/*   Updated: 2019/09/06 22:56:32 by aguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *destination, const void *source, int c, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t n);
void	*ft_memset(void *destination, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
#endif
