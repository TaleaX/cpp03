# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 12:22:31 by tdehne            #+#    #+#              #
#    Updated: 2023/01/15 23:01:24 by tdehne           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	c++
CFLAGS		=	-Werror -Wextra -Wall  -std=c++98

BOLD	= \033[1m
BLACK	= \033[30;1m
RED		= \033[31;1m
GREEN	= \033[32;1m
YELLOW	= \033[33;1m
BLUE	= \033[34;1m
MAGENTA	= \033[35;1m
CYAN	= \033[36;1m
WHITE	= \033[37;1m
RESET	= \033[0m

NAME 		=	ex02

OBJ_DIR		=	obj/

SRC_NAME	=	main ClapTrap FragTrap
INC_NAME	=	FragTrap ClapTrap

SRC_FILES	=	$(addsuffix .cpp, $(SRC_NAME))
OBJ_FILES	=	$(addsuffix .o, $(addprefix $(OBJ_DIR), $(SRC_NAME)))
INC_FILES	=	$(addsuffix .hpp, $(INC_NAME))

header		=	.header

all : $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@echo "$(BLUE)Compiling: $(RESET) $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(header) $(OBJ_DIR) $(OBJ_FILES) $(INC_FILES)
	@$(CC) $(OBJ_FILES) -o $(NAME)
	@echo "$(GREEN)Done$(RESET)"

$(header) :
	@touch .header
	@echo	"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"
	@echo	"░████████╗██████╗░███████╗██╗░░██╗███╗░░██╗███████╗░"
	@echo	"░╚══██╔══╝██╔══██╗██╔════╝██║░░██║████╗░██║██╔════╝░"
	@echo	"░░░░██║░░░██║░░██║█████╗░░███████║██╔██╗██║█████╗░░░"
	@echo	"░░░░██║░░░██║░░██║██╔══╝░░██╔══██║██║╚████║██╔══╝░░░"
	@echo	"░░░░██║░░░██████╔╝███████╗██║░░██║██║░╚███║███████╗░"
	@echo	"░░░░╚═╝░░░╚═════╝░╚══════╝╚═╝░░╚═╝╚═╝░░╚══╝╚══════╝░"
	@echo	"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME) .header

re: fclean all