
NAME		=

SOURCES_LIST	=	main.cpp\

CC		= c++
CFLAGS	=	-Werror -Wall -Wextra -std=c++98 -pedantic-errors

INCLUDES = -I$(HEADERS_DIR)

HEADERS_LIST = iter.hpp
HEADERS_DIR	=  .\
HEADERS =	$(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

OBJECTS	=	$(patsubst %.cpp, %.o, $(SOURCES_LIST))

.PHONY:	all clean fclean re

all	: 	$(NAME)

$(NAME): $(OBJECTS)
		$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -c $(INCLUDES) $< -o $@

clean:
		@rm -f $(OBJECTS)

fclean:	clean
		@rm -f $(NAME)

re:		fclean all
