NAME = libft.a

# Regular .c files (exclude ft_lst... files)
SRCS = $(wildcard *.c)
BONUS_SRCS = $(wildcard ft_lst*.c)  # Only the bonus functions

# Object files for regular and bonus
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Default target: Create libft.a from regular .o files
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Bonus target: Add bonus .o files to libft.a
bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

# Compile .c files into .o files
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Full clean: Remove library file and object files
fclean: clean
	rm -f $(NAME)

# Rebuild everything from scratch
re: fclean all

.PHONY: all clean fclean re bonus
