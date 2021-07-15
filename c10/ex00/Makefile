SRCS	= ft_display_file.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra 

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re