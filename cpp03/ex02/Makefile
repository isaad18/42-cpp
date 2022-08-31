SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++

$(RM)		= rm -f

CXXFLAGS	= -Wall -Werror -Wextra

NAME		= Trap

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all
