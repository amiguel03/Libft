# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefilel                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 13:28:12 by amiguel-          #+#    #+#              #
#    Updated: 2024/01/25 16:53:47 by amiguel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME LIBFT
NAME=libft.a

# SOURCE FILES
SRC_DIR		=	src/
SRC_FILES	=	ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_strlen.c \
					ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strncmp.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_calloc.c\
					ft_strdup.c \
					ft_substr.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_split.c	\
					ft_itoa.c \
					ft_strmapi.c \
					ft_striteri.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c
SRC			= $(addprefix $(SRC_DIR), $(SRC_FILES))

# BONUS FILES
BONUS_DIR 	=	bonus/
BONUS_FILES	=	ft_lstnew_bonus.c \
						ft_lstadd_front_bonus.c \
						ft_lstsize_bonus.c \
						ft_lstlast_bonus.c \
						ft_lstadd_back_bonus.c \
						ft_lstmap_bonus.c \
						ft_lstdelone_bonus.c \
						ft_lstiter_bonus.c \
						ft_lstclear_bonus.c
BONUS		= $(addprefix $(BONUS_DIR), $(BONUS_FILES))

# OBJECT FILES
OBJS_DIR	= objs/
OBJS		= $(SRC:$(SRC_DIR)%.c=$(OBJS_DIR)%.o)
OBJS_BONUS	= $(BONUS:$(BONUS_DIR)%.c=$(OBJS_DIR)%.o)

# COMPILER OPTIONS
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
RM			= rm -f
INCLUDE		= -I includes

all:		$(NAME)

# ar: "archiver" -> agrupa varios archivos objeto en un archivo de libreria
# r: indica a "ar" que debe reemplazar o agregar archivos a la libreria
# c: indica que debe crear la libreria si no existe
$(NAME): 	$(OBJS)
				ar -rcs $(NAME) $(OBJ)
bonus: 		$(OBJS_BONUS)
				ar -rcs $(NAME) $(OBJS_BONUS)
# -p: se utiliza para crear un directorio junto con sus directorios padres, en
# nuestro caso lo utilizamos para crear por primera vez el directorio objs/ y
# que no nos salte el error de que ya existe una vez ya se ha creado.
$(OBJS_DIR)%.o: $(SRC_DIR)%.c
				@mkdir -p $(OBJS_DIR)
				${CC} ${FLAGS} $(INCLUDE) -c $< -o $@

$(OBJS_DIR)%.o: $(BONUS_DIR)%.c
				@mkdir -p $(OBJS_DIR)
				${CC} ${FLAGS} $(INCLUDE) -c $< -o $@

clean:
				$(RM) -r $(OBJS_DIR)

fclean: 		clean
				$(RM) $(NAME)

re: 			fclean all

.PHONY: clean bonus fclean re all