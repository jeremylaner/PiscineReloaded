# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaner <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 16:05:37 by jlaner            #+#    #+#              #
#    Updated: 2016/11/04 17:26:55 by jlaner           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc 

FLAGS = -c -Wall -Werror -Wextra

OUTPUT = ft_display_file

SRC = *.c

HEAD = header.h

all: $(OUTPUT)

$(OUTPUT):
	$(GCC) $(FLAGS) $(SRC)
	$(GCC) *.o -o $(OUTPUT)

clean:
	rm -f *o

fclean: clean
	rm -f $(OUTPUT)
