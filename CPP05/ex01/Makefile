CC = c++

CFLAGS = -Wall -Wextra - Werro -std=c++98

SRCS = Bureaucrat.cpp Bureaucrat.hpp main.cpp Form.cpp Form.hpp

OBJS = (SRCS:.cpp=.o)

NAME = Form

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) $(OBJS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.Phony: clean