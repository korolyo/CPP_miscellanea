
NAME		= Intern

SOURCES_LIST	=	main.cpp\
					Bureaucrat.cpp\
					Form.cpp\
					PresidentialPardonForm.cpp\
					RobotomyRequestForm.cpp\
					ShrubberyCreationForm.cpp\
					Intern.cpp\

CC		= c++
CFLAGS	=	-Werror -Wall -Wextra -std=c++98 -pedantic-errors

INCLUDES = -I$(HEADERS_DIR)

HEADERS_LIST =	Bureaucrat.hpp\
				Form.hpp\
				PresidentialPardonForm.hpp\
                RobotomyRequestForm.hpp\
                ShrubberyCreationForm.hpp\
                Intern.hpp\

HEADERS_DIR	=  ./includes/
HEADERS =	$(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

OBJECTS	=	$(patsubst %.cpp, %.o, $(SOURCES_LIST))

.PHONY:	all clean fclean re

all	: 	$(NAME)

$(NAME): $(OBJECTS)
		$(CC) $(CFLAGS) $(INCLUDES) $(OBJECTS) -o $(NAME)

%.o : %.cpp $(HEADERS) Makefile
	@$(CC) $(CFLAGS) -c $(INCLUDES) $< -o $@


clean:
		@rm -f $(OBJECTS)

fclean:	clean
		@rm -f $(NAME)

re:		fclean all