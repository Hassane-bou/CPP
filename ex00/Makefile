CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(SRCS)  -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $o

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.Phony: clean
	