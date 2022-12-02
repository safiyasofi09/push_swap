SRCS = push_swap.c push_swap_instrucions.c

OBJS = {SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

RM = rm -rf

NAME = push_swap.a

%.c:%.o
		${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:	${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re