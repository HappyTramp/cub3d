LIBFT_PATH = ./libft
MINILIBX_PATH = ./miniLibX

CC = gcc
CCFLAGS = -I$(LIBFT_PATH) -I$(MINILIBX_PATH) -I. -Wall -Wextra #-Werror
LDFLAGS = -L$(LIBFT_PATH) -lft \
		  -L$(MINILIBX_PATH) -lmlx \
		  -framework OpenGL -framework AppKit -lm

NAME = cub3D
SRC = main.c event.c parse/parse.c parse/parse_textures.c \
	  parse/parse_color.c parse/parse_resolution.c \
	  state.c vector.c render.c helper.c error.c
OBJ = $(SRC:.c=.o)
INCLUDE = cub3d.h

all: libft_all minilibx_all $(NAME)

$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c -o $@ $<

clean: libft_clean minilibx_clean
	rm -f $(OBJ)

fclean: clean libft_fclean
	rm -f $(NAME)

re: fclean all

bonus: all

libft_all:
	make -C $(LIBFT_PATH) all

libft_clean:
	make -C $(LIBFT_PATH) clean

libft_fclean:
	make -C $(LIBFT_PATH) fclean

minilibx_all:
	make -C $(MINILIBX_PATH) all

minilibx_clean:
	make -C $(MINILIBX_PATH) clean
