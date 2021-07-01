SRCS = ./srcs/*.c

all : 
	gcc -g main.c libft.a $(SRCS)

clean :
	rm -rf *.o
	rm -rf *.a
