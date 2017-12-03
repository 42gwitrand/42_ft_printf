##
## Makefile for bistro-matic in /home/extra/Projects/Piscine/bistro-matic/
##
## Made by Witrand Gaspard
## Login   <gaspard.witrand@epitech.eu>
##
## Started on  Wed Oct 26 14:36:28 2016 Witrand Gaspard
## Last update Sun Nov  6 23:07:02 2016 clement girard
##

CC	=	gcc

RM	=	rm -f

all:
	make -C libft

clean:
	make clean -C libft

fclean:
	make fclean -C libft

re:
	make re -C libft

.PHONY: all clean fclean re
