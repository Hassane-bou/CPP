CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Contact.cpp  main.cpp PhoneBook.cpp 

OBJS = $(SRCS:.cpp=.o)

NAME = PhoneBook

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS)  -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.Phony: clean
	