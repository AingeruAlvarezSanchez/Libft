NAME = libft.a

## COMPILING AND LINKING RELATED VARIABLES ##
AR = ar rc
CC = gcc
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address -g3
SANITIZE = -fsanitize=address -g3
RM = rm -f
#############################################

########## FILES RELATED VARIABLES ##########
INCLUDES = libft.h
SRC =	ft_isalpha.c		\
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

OBJ = $(SRC:.c=.o)
#############################################

.SILENT:

all: $(NAME)

$(NAME) : $(OBJ) $(INCLUDES)
	$(AR) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $(SRC) $(SRC_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus .SILENT