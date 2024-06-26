NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

IS_SOMETHING_SRC = ft_isalpha.c \
                   ft_isdigit.c \
                   ft_isalnum.c \
                   ft_isascii.c \
                   ft_isprint.c \

TO_SOMETHING_SRC = ft_tolower.c \
                   ft_toupper.c \
                   ft_atoi.c    \
                   ft_itoa.c    \

MEM_SOMETHING_SRC = ft_memset.c  \
                    ft_bzero.c   \
                    ft_memcpy.c  \
                    ft_memmove.c \
                    ft_memchr.c  \
                    ft_memcmp.c  \

STR_SOMETHING_SRC = ft_strlen.c   \
                    ft_strlcpy.c  \
                    ft_strlcat.c  \
                    ft_strnstr.c  \
                    ft_strchr.c   \
                    ft_strrchr.c  \
                    ft_strncmp.c  \
                    ft_strdup.c   \
                    ft_substr.c   \
                    ft_strjoin.c  \
                    ft_strtrim.c  \
                    ft_strmapi.c  \
                    ft_striteri.c \

PUT_SOMETHING_SRC = ft_putchar_fd.c \
                    ft_putstr_fd.c  \
                    ft_putendl_fd.c \
                    ft_putnbr_fd.c  \

MALLOC_FUNCS_SRC = ft_calloc.c     \
                   ft_split.c      \

LST_SOMETHING_SRC = ft_lstnew.c       \
                    ft_lstadd_front.c \
                    ft_lstsize.c      \
                    ft_lstlast.c      \
                    ft_lstadd_back.c  \
                    ft_lstdelone.c    \
                    ft_lstclear.c     \
                    ft_lstiter.c      \
                    ft_lstmap.c       \

SRC = $(IS_SOMETHING_SRC)                                          \
      $(TO_SOMETHING_SRC)                                          \
      $(MEM_SOMETHING_SRC)                                         \
      $(STR_SOMETHING_SRC)                                         \
      $(PUT_SOMETHING_SRC)                                         \
      $(MALLOC_FUNCS_SRC)                                          \
      $(if                                                         \
            $(filter $(MAKECMDGOALS), bonus),                      \
            $(LST_SOMETHING_SRC)                                   \
      )                                                            \

OBJ = $(patsubst %.c, obj/%.o, $(SRC))

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

obj/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf obj

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

.PHONY: bonus
bonus: all
