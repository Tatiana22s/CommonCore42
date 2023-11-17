CC = cc
CFLAGS = -Wall -Werror -Wextra
OBJS = ft_isalpha.o ft_atoi.o ft_bzero.o ft_isalnum.o ft_isascii.o \
	ft_isdigit.o ft_isprint.o ft_tolower.o ft_toupper.o ft_strlen.o \
	ft_memchr.o ft_memset.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
	ft_strlcat.o ft_strlcpy.o ft_strchr.o ft_strrchr.o ft_strncmp.o \
	ft_strnstr.o ft_calloc.o ft_strdup.o ft_putchar_fd.o ft_putstr_fd.o \
	ft_putnbr_fd.o ft_putendl_fd.o ft_itoa.o ft_strmapi.o ft_striteri.o \
	ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o
BONUS_OBJS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o \
	ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstmap.o ft_lstiter.o

RM = rm -rf
NAME = libft.a
AR = ar
ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	 $(AR) $(ARFLAGS) $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
