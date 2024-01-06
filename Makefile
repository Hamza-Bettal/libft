NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

LIB = ar rc

RM = rm -f

SRC	=	ft_atoi.c ft_strncmp.c ft_split.c \
		ft_bzero.c ft_strnstr.c ft_striteri.c \
		ft_strrchr.c ft_calloc.c ft_strmapi.c \
		ft_isalnum.c ft_substr.c ft_putnbr_fd.c \
		ft_isalpha.c ft_strchr.c ft_putendl_fd.c \
		ft_isascii.c ft_tolower.c ft_putchar_fd.c \
		ft_isdigit.c ft_memchr.c ft_toupper.c \
		ft_isprint.c ft_memmove.c ft_putstr_fd.c \
		ft_memcpy.c ft_memcmp.c ft_itoa.c \
		ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strdup.c \
		ft_strlen.c ft_strjoin.c ft_strtrim.c

BONUS =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c

SRC_OBJ = $(SRC:.c=.o)
BONUS_OBJS		= $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(LIB) $(NAME) $(SRC_OBJ)

clean:
	$(RM) $(SRC_OBJ) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< 

re: fclean all

bonus:		 	$(BONUS_OBJS)
					$(LIB) $(NAME) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus