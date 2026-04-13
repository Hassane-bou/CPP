CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = AForm.cpp Bureaucrat.cpp main.cpp PresodentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = Intern

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

.Phony: clean