NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJS = ft_printf.o ft_print_char.o ft_print_str.o ft_print_nbr.o  \
	ft_print_unsigned.o ft_print_ptr.o ft_print_hexa.o ft_print_hexaa.o

RM = rm -rf
AR = ar
ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
