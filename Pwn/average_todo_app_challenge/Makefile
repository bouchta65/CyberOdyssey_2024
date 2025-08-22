SRC = main.c
NAME = average_todo_app
CFLAGS = -fno-stack-protector -no-pie

$(NAME): $(SRC)
	gcc $(CFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
