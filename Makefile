# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiller <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 22:26:44 by aguiller          #+#    #+#              #
#    Updated: 2019/09/20 12:13:08 by aguiller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC1 = ./srcs/ft_*
SRC2 = ft_*.o

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC1) -I ./includes   
	@ar -rc  $(NAME) $(SRC2)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
re: fclean all
