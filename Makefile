CC := cc

CFLAGS := -Wall -Wextra -Werror

SRCS := $(wildcard *.c)

OBJS := $(SRCS:.c=.o)

NAME := libft.a

HEADER := libft.h

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $@ $^
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
