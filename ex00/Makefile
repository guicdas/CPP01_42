CC				= c++
CFLAGS			= -Wall -Wextra -Werror -std=c++98
RM				= rm -fr

NAME			= BraiiiiiiinnnzzzZ

SOURCES			= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

SOURCES_O		= $(SOURCES:.cpp=.o)

all:			$(NAME)

$(NAME):	$(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)
		
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(NAME) $(<:.c=.o)

clean:
	$(RM) $(SOURCES_O)

fclean:			clean
	$(RM) $(NAME)

re:				fclean $(NAME)

exe:			
	@$(RM) $(SOURCES_O)
	@$(RM) $(NAME)
	@$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)
	@./$(NAME)

.PHONY:			all clean fclean re exe