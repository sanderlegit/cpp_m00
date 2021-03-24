# **************************************************************************** #
#                                                                              #
#                                                        ..eeeee..             #
#    Makefile                                          e8'   8   '8e           #
#                                                     d8     8     8b          #
#    By: dries <sanderlegit@gmail.com>                8!   .dWb.   !8          #
#                                                     Y8 .e* 8 *e. 8P          #
#    Created: 2021/03/24 17:20:50 by dries             *8*   8   *8*           #
#    Updated: 2021/03/24 17:24:12 by dries               **ee8ee**             #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
CPPFILES	=	megaphone.cpp
OBJDIR		=	objects
OFILES		=	$(CPPFILES:%.cpp=$(OBJDIR)/%.o)
OS      	=   $(shell uname)
ifeq ($(OS),Linux)
	CC		=	g++
else
	CC		=	clang++
endif
FLAGS		=	-Wall -Werror -Wextra -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJDIR) $(OFILES)
	$(CC) $(FLAGS) -o $(NAME) $(OFILES)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -rf $(OBJDIR)
	rm -f $(NAME)

re: fclean all

test: all
	@echo "\n\t\t!TEST"
	@echo "\tCorrect: All arguments as one string, All alpha uppercase\n"
	./$(NAME) "shhhhh... I think the students are asleep..."
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(NAME)
