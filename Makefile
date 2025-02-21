# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 12:08:55 by vhumblet          #+#    #+#              #
#    Updated: 2024/10/18 14:41:18 by vhumblet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =				ft_isalpha.c		\
					ft_isdigit.c		\
					ft_isalnum.c		\
					ft_isascii.c		\
					ft_isprint.c		\
					ft_strlen.c			\
					ft_memset.c			\
					ft_bzero.c			\
					ft_memcpy.c			\
					ft_memmove.c		\
					ft_strlcpy.c		\
					ft_strlcat.c		\
					ft_toupper.c		\
					ft_tolower.c		\
					ft_strchr.c			\
					ft_strrchr.c		\
					ft_strncmp.c		\
					ft_memchr.c			\
					ft_memcmp.c			\
					ft_strnstr.c		\
					ft_atoi.c			\
					ft_calloc.c			\
					ft_strdup.c			\
					ft_substr.c			\
					ft_strjoin.c		\
					ft_strtrim.c		\
					ft_split.c			\
					ft_itoa.c			\
					ft_strmapi.c		\
					ft_striteri.c		\
					ft_putchar_fd.c		\
					ft_putstr_fd.c		\
					ft_putendl_fd.c		\
					ft_putnbr_fd.c		\

SRCS_BONUS = 		ft_lstnew_bonus.c			\
					ft_lstadd_front_bonus.c		\
					ft_lstsize_bonus.c			\
					ft_lstlast_bonus.c			\
					ft_lstadd_back_bonus.c		\
					ft_lstdelone_bonus.c		\
					ft_lstclear_bonus.c			\
					ft_lstiter_bonus.c			\
					ft_lstmap_bonus.c			\

NAME = libft.a
LIB = ar rcs
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
REMOVE = rm -rf
INCS_DIR = ./
CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)
bonus: $(OBJS) $(OBJS_BONUS)
		$(LIB) $(NAME) $(OBJS) $(OBJS_BONUS)
		@echo "Libft Compiled With Bonus"
.c.o:
		$(CC) $(CC_FLAGS) -c -I $(INCS_DIR) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
				$(LIB) $(NAME) $(OBJS)
				@echo "libft Compiled"

clean:
		$(REMOVE) $(OBJS) $(OBJS_BONUS)
		@echo ".o Delete"

fclean: clean
				$(REMOVE) $(NAME)
				@echo "libft.a Delete"

re: fclean clean all

.PHONY:		all clean fclean re