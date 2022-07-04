SRCS		= main.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

$(RM)		= rm -f

CFLAGS	= -Wall -Werror -Wextra

NAME		= phonebook

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all