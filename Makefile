# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 22:19:46 by rlouvrie          #+#    #+#              #
#    Updated: 2024/09/23 16:55:52 by rlouvrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_malcolm

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src

SRC = main.c \
		error.c \
		parsing.c \
		parsing_ip.c \
		parsing_mac.c \
		signal.c \
		free.c \
		info.c \
		string.c \
		net_utils.c

OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

INC = -I include -I ft

LIBFT_DIR = ft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	@echo "Building libft"
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	@echo "Compiling $(NAME)"
	@$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@echo "Removing object files"
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C $(LIBFT_DIR) fclean

fclean: clean
	@echo "Removing $(NAME)"
	@rm -f $(NAME)

re: fclean all

debug:
	@echo "Compiling with debug flags"
	@$(MAKE) re CFLAGS="-g"

.PHONY: all clean fclean re debug