SRCS		= main.cpp Fixed.cpp\

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

$(RM)		= rm -f

CFLAGS	= -Wall -Werror -Wextra

NAME		= Fixed

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all
