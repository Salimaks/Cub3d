# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skassimi <skassimi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 13:45:05 by skassimi          #+#    #+#              #
#    Updated: 2025/08/06 17:42:26 by skassimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d
LIBFT = libft

CC = cc
FLAGS = -Wall -Wextra -Werror -g3
MLX_FLAGS = -Lminilibx-linux -lmlx_Linux -lX11 -lXext -lm
RM = rm -f

SOURCES = main.c \
		check.c \
		get_next_line.c \
		parser.c \
	
OBJECTS = $(SOURCES:.c=.o)

HEADER = cub3d.h

%.o: %.c

	$(CC) $(FLAGS) -I./minilibx-linux -c $< -o $@

$(NAME): $(OBJECTS)
	make -C $(LIBFT)
	make -C ./minilibx-linux
	$(CC) $(FLAGS) $(MLX_FLAGS) $(OBJECTS) libft/libft.a -o $(NAME)  

all: $(NAME)

clean:
	$(RM) $(OBJECTS)
	make clean -C $(LIBFT)
	make clean -C ./minilibx-linux

fclean: clean
	$(RM) $(NAME) $(OBJECTS) libft.a

re: clean fclean all

.PHONY: all clean fclean re