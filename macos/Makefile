# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgenie <bgenie@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 19:42:36 by bgenie            #+#    #+#              #
#    Updated: 2022/09/24 15:53:58 by bgenie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -fsanitize=address -g

AR = ar
AFLAGS = -rcs

NASM = nasm
NFLAGS = -f macho64

SRCS =	ft_strcmp.s \
		ft_strcpy.s \
		ft_strlen.s \
		ft_write.s \
		ft_read.s \
		ft_strdup.s

OBJS = $(SRCS:.s=.o)

NAME = libasm.a

TEST = main

.s.o:
	$(NASM) $(NFLAGS) -o $(<:.s=.o) $<

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(AFLAGS) $(NAME) $(OBJS)

test:
	$(CC) $(CFLAGS) -o $(TEST).out $(TEST).c $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

tclean:
	rm -f $(TEST).o $(TEST).out

purge:	fclean tclean

re:	fclean all

.PHONY:	all clean fclean tclean re test purge