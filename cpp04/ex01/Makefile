CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=bsp

FILES=main.cpp animal.cpp dog.cpp cat.cpp wrongAnimal.cpp wrongCat.cpp brain.cpp
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
