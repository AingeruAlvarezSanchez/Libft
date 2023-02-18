NAME = libft.a

## COMPILING AND LINKING RELATED VARIABLES ##
AR = ar rc
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SANITIZE = -fsanitize=address -g3
RM = rm -f
#############################################

########## FILES RELATED VARIABLES ##########
INCLUDES = libft.h
SRC =		ft_isalpha.c				\
			ft_isdigit.c				\
			ft_isalnum.c				\
			ft_isascii.c				\
			ft_isprint.c				\
			ft_strlen.c					\
			ft_memset.c					\
			ft_bzero.c					\
			ft_memcpy.c					\
			ft_memmove.c				\
			ft_strlcpy.c				\
			ft_strlcat.c				\
			ft_toupper.c				\
			ft_tolower.c				\
			ft_strchr.c					\
			ft_strrchr.c				\
			ft_strncmp.c				\
			ft_memchr.c					\
			ft_memcmp.c					\
			ft_strnstr.c				\
			ft_atoi.c					\
			ft_calloc.c					\
			ft_strdup.c					\
			ft_substr.c					\
			ft_strjoin.c				\
			ft_strtrim.c				\
			ft_split.c					\
			ft_itoa.c					\
			ft_strmapi.c				\
			ft_striteri.c				\
			ft_putchar_fd.c				\
			ft_putstr_fd.c				\
			ft_putendl_fd.c				\
			ft_putnbr_fd.c				\

SRC_BONUS = ft_lstnew.c					\
			ft_lstadd_front.c			\
			ft_lstsize.c				\
			ft_lstlast.c				\
			ft_lstadd_back.c			\
			ft_lstdelone.c				\
			ft_lstclear.c				\
			ft_lstiter.c				\
			ft_lstmap.c					\

SRC_EXT =	ft_isnot_empty_str.c		\
			ft_isspace.c				\
			ft_checkext.c				\
			ft_checkfile.c				\
			ft_getfile_size.c			\
			ft_chr_in_set.c				\
			ft_doublestrdup.c			\
			ft_doublefree.c				\
			ft_doublestrlen.c			\
			ft_strcmp.c					\
			ft_btree_apply_infix.c		\
			ft_btree_apply_prefix.c		\
			ft_btree_apply_suffix.c		\
			ft_btree_create_node.c		\
			ft_btree_insert_data.c		\
			ft_btree_level_count.c		\
			ft_btree_search_item.c		\
			ft_btree_size.c				\

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
OBJ_EXT = $(SRC_EXT:.c=.o)
#############################################

.SILENT:

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	$(AR) $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $^

bonus: $(OBJ_BONUS) $(OBJ) $(INCLUDES)
	$(AR) $(NAME) $^

$(OBJ_BONUS): $(SRC_BONUS)
	$(CC) $(CFLAGS) -c $^

ext: $(OBJ_EXT) $(OBJ) $(INCLUDES)
	$(AR) $(NAME) $^

$(OBJ_EXT): $(SRC_EXT)
	$(CC) $(CFLAGS) -c $^

clean:
	$(RM) $(OBJ) $(OBJ_BONUS) $(OBJ_EXT)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus ext
