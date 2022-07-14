SRCS		= main.cpp Zombie.cpp randomchump.cpp newZombie.cpp\

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

$(RM)		= rm -f

CFLAGS	= -Wall -Werror -Wextra

NAME		= zombie

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all