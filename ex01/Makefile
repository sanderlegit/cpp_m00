# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: averheij <averheij@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/11 15:02:04 by averheij      #+#    #+#                  #
#    Updated: 2021/01/12 14:48:59 by averheij      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook
CPPFILES	=	phonebook.cpp phonebook.class.cpp contact.class.cpp
OBJDIR		=	objects
OFILES		=	$(CPPFILES:%.cpp=$(OBJDIR)/%.o)
OS      	=   $(shell uname)
ifeq ($(OS),Linux)
	CC		=	g++
else
	CC		=	clang++
endif
FLAGS		=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJDIR) $(OFILES)
	$(CC) $(FLAGS) -o $(NAME) $(OFILES)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm $(OFILES)

fclean: clean
	rm -rf $(OBJDIR)
	rm $(NAME)

re: fclean all

test: all
	@echo
	./$(NAME)
