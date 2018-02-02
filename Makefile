##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

NAME	= frenchNameFormatter

CC	= gcc

RM	= rm -f

SRCS	= ./src/french.c \
	  ./src/my_putchar.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
