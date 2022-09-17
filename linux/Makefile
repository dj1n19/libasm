CC = gcc
CFLAGS = -Wall -Wextra -Werror -no-pie

AR = ar
AFLAGS = rcs

NASM = nasm
NFLAGS = -f elf64

SRCS =	ft_strcmp.s \
		ft_strcpy.s \
		ft_strlen.s \
		ft_write.s

OBJS = $(SRCS:.s=.o)

NAME = libasm.a

TEST = main

.s.o:
	$(NASM) $(NFLAGS) -o $(<:.s=.o) $<

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(AFLAGS) -o $(NAME) $(OBJS)

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