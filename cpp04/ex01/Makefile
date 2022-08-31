SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp WrongCat.cpp WrongAnimal.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++

$(RM)		= rm -f

CXXFLAGS	= -Wall -Werror -Wextra

NAME		= animal

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all
