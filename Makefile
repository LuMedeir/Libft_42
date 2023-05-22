# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 10:46:18 by lumedeir          #+#    #+#              #
#    Updated: 2023/05/18 10:51:54 by lumedeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
BUILD = ./trash/
SRC =	ft_isalpha.c ft_isascii.c \
		ft_isalnum.c ft_isdigit.c ft_isprint.c \
		ft_tolower.c ft_toupper.c \
		ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strdup.c ft_strlcat.c \
		ft_strlcpy.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strlen.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c \

OBJ = $(addprefix $(BUILD), $(SRC:.c=.o))

all: $(NAME)

$(NAME) : $(OBJ)
		@ar -rcs $(NAME) $(OBJ)
$(BUILD)%.o:%.c
		mkdir -p $(BUILD)
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -rf $(BUILD)
fclean: clean
		rm -f *.a
re: fclean all
.PHONY: all clean fclean re