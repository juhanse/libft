NAME = libft.a
SOURCES = *.c
HEADER = libft.h
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) -c $(SOURCES) -I $(HEADER)
	ar rc $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
