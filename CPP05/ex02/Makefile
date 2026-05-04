CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = AForm.cpp Bureaucrat.cpp main.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = AForm

all : $(NAME)


$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean