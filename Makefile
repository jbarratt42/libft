# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 09:15:50 by jbarratt          #+#    #+#              #
#    Updated: 2025/01/30 10:27:27 by jbarratt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEAD = $(NAME:.a=.h)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =		ft_atoi \
			ft_bzero \
			ft_calloc \
			ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_isprint \
			ft_itoa \
			ft_memchr \
			ft_memcmp \
			ft_memcpy \
			ft_memmove \
			ft_memset \
			ft_putchar_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_putstr_fd \
			ft_split \
			ft_strchr \
			ft_strdup \
			ft_striteri \
			ft_strjoin \
			ft_strlcat \
			ft_strlcpy \
			ft_strlen \
			ft_strmapi \
			ft_strncmp \
			ft_strnstr \
			ft_strrchr \
			ft_strtrim \
			ft_substr \
			ft_tolower \
			ft_toupper \
			ft_lstnew \
	  		ft_lstadd_front \
	  		ft_lstsize \
	  		ft_lstlast \
	  		ft_lstadd_back \
	  		ft_lstdelone \
	  		ft_lstclear \
	  		ft_lstiter \
	  		ft_lstmap \
			get_next_line \
			get_next_line_utils \
			ft_dprintf_double \
			ft_dprintf_hex \
			ft_dprintf_int \
			ft_dprintf_str \
			ft_printf

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

all: $(NAME)

$(NAME): $(OBJS) 
	$(AR) $@ $^

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

list:
	@echo $(FILES)

.PHONY: bonus all clean fclean re list
