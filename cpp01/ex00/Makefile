CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=zombie

FILES=Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJECTS=$(FILES:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
