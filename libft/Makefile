# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 12:00:26 by eros-gir          #+#    #+#              #
#    Updated: 2023/01/31 10:31:37 by eros-gir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS	= -Wall -Werror -Wextra -W

SRC = ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c ft_atoi.c \
ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_bzero.c \
ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_calloc.c \
ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_isalnum.c \
ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c ft_isalpha.c \
ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c ft_isascii.c \
ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c ft_joinloc.c \
ft_strrcmp.c ft_strrev.c  ft_lstlast.c ft_lstnew.c \
ft_lstsize.c  ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
ft_lstdelone.c ft_lstiter.c ft_latoi.c

OBJ = $(SRC:.c=.o)

HDRS = libft.h

%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
