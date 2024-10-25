CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

NAME = libft.a

# ft_strtrim.c 

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
       ft_itoa.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
       ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
       ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_strchr.c \
       ft_split.c ft_strdup.c ft_striter1.c ft_strlcat.c ft_strlcpy.c \
       ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
       ft_strjoin.c ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c 

OBJS = $(SRCS:.c=.o)

.PHONY: all
all: $(NAME)

# r: Insert the files into the archive
# c: Create the archive if it does not exist
# s: Create an index (symbol table) for the library, which helps in linking

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

# Pattern rule to compile object files; 
# 	the '%' is a string placeholder for the name of each program
#	-c tells the compiler to compile into an object file
#	$< this indicates a prerequisite: .c has to be compiled
#	-o $@ indicates the output filename, which will be the name of the target

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# -f forces the removal without confirmation

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
