NAME=libasm.a

SRC=ft_write.s \
	ft_read.s \
	ft_strlen.s \
	ft_strcmp.s \
	ft_strcpy.s \
	ft_strdup.s

OBJ=$(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.s
	nasm -f macho64 -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	rm -f libasm
	gcc -Wall -Wextra -Werror main.c -L. -lasm -o libasm
	./libasm

