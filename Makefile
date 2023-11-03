SRC = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isprint.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strncmp.c \
       ft_memcmp.c \
       ft_memchr.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlen.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strnstr.c \
	   ft_atoi.c \
	   ft_isascii.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_striteri.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \

BONUSB = ft_lstnew_bonus.c \
       ft_lstadd_front_bonus.c \
       ft_lstsize_bonus.c \
       ft_lstlast_bonus.c \
       ft_lstadd_back_bonus.c \
	   ft_lstdelone_bonus.c \

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUSB:.c=.o)
NAME = libft.a
HEADER = libft.h
ccc = cc
LIBC = ar rcs
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${ccc} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

all: $(NAME)

bonus: $(NAME) $(BONUS_OBJ)
	$(LIBC) $(NAME) $(BONUS_OBJ) 

clean:
	-rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	-rm -f $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re