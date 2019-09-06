# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiller <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 22:26:44 by aguiller          #+#    #+#              #
#    Updated: 2019/09/06 22:28:18 by aguiller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC1 = ft_*
SRC2 = ft_*.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC1) 
	ar -rc  $(NAME) $(SRC2)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
re: fclean all