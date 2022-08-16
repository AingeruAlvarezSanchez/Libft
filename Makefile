NAME = libft.a

## COMPILING AND LINKING RELATED VARIABLES ##
AR = ar rc
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
#############################################

########## FILES RELATED VARIABLES ##########
INCLUDES = libft.h
SRC =	ft_isalpha.c		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\

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

.PHONY: all clean fclean re bonus