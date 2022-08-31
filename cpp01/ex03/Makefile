SRCS		= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp \

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

$(RM)		= rm -f

CFLAGS	= -Wall -Werror -Wextra

NAME		= violence

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all
