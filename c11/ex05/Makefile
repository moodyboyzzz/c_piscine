SRCS	= main.c ft_fun.c do-op.c oper.c
 
OBJS	= ${SRCS:.c=.o}

NAME	= do-op

CC		= gcc

RM		= rm -f

CFLAGS = -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ft.h

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} -I ft.h

all:		${NAME}

clean:
	$(RM) $(OBJS)

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re