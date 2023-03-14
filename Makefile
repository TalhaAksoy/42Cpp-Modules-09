NAME = btc

SRCS =	$(wildcard *.cpp)

OBJS = ${SRCS:.cpp=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror #-std=c++98

all: csv $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

csv:
	curl -O https://projects.intra.42.fr/uploads/document/document/14968/cpp_09.tgz
	tar xvf cpp_09.tgz
	rm -rf cpp_09.tgz
	mv cpp_09/data.csv ./
	rm -rf cpp_09

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)
	@rm -rf data.csv

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re csv create
