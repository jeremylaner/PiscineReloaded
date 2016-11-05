# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaner <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 20:51:35 by jlaner            #+#    #+#              #
#    Updated: 2016/11/03 21:06:57 by jlaner           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/*.c

LIB = libft.a

INC = includes

GCC = gcc -c -Wall -Wextra -Werror

all: $(LIB)

$(LIB):
	$(GCC) $(SRC) -I$(INC)
	ar rc $(LIB) *.o
	ranlib $(LIB)

clean:
	rm -f *.o

fclean: clean
	rm -f $(LIB)

re: fclean all
