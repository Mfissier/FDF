# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adespond <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 11:41:24 by adespond          #+#    #+#              #
#    Updated: 2016/01/29 17:07:19 by adespond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

OBJDIR  = obj
SRCDIR  = src
INCDIR  = includes/

CC 		= gcc
CFLAGS  = -Wall -Wextra -Werror -pedantic -g
IFLAGS  = -I $(INCDIR)

AR 		= ar rcs
RM		= rm -rf

SRC		= ft_putchar_fd \
		  get_next_line \
		  ft_strchrpos \
		  ft_htoa \
		  ft_itoa_base \
		  ft_ltoa \
		  ft_putchar \
		  ft_strchrsplit \
		  ft_putendl \
		  ft_putendl_fd \
		  ft_putnbr \
		  ft_putnbr_fd \
		  ft_putstr \
		  ft_putstr_fd \
		  ft_strlen \
		  ft_memset \
		  ft_bzero \
		  ft_memcpy \
		  ft_memccpy \
		  ft_memmove \
		  ft_memchr \
		  ft_memcmp \
		  ft_strdup \
		  ft_strcpy \
		  ft_strncpy \
		  ft_strcat \
		  ft_strncat \
		  ft_strlcat \
		  ft_strchr \
		  ft_ultoa_base \
		  ft_strrchr \
		  ft_strstr \
		  ft_strnstr \
		  ft_ultoa \
		  ft_strcmp \
		  ft_strncmp \
		  ft_atoi \
		  ft_isalpha \
		  ft_isdigit \
		  ft_isalnum \
		  ft_isascii \
		  ft_isprint \
		  ft_toupper \
		  ft_tolower \
		  ft_itoa \
		  ft_strsplit \
		  ft_strtrim \
		  ft_strjoin \
		  ft_strsub \
		  ft_strmapi \
		  ft_strequ \
		  ft_strnequ \
		  ft_strclr \
		  ft_striter \
		  ft_striteri \
		  ft_strmap \
		  ft_strdel \
		  ft_strnew \
		  ft_memdel \
		  ft_memalloc \
		  ft_lstmap \
		  ft_lstiter \
		  ft_lstadd \
		  ft_lstnew \
		  ft_lstdelone \
		  ft_lstdel \
		  ft_uitoa_base

.SILENT:

SRCS    = $(addsuffix .c, $(SRC))
OBJS	= $(SRCS:%.c=$(OBJDIR)/%.o)

CSRCS   = $(shell bash -c 'ls -l src | grep ^\- | wc -l | sed "s/ //g"')
COBJS   = $(shell bash -c 'mkdir -p obj && ls -l obj | grep ^\- | wc -l | sed "s/ //g"') +

C0  = 0
C1  = 30
C2  = 31
C3  = 32
C4  = 33
C5  = 34
C6  = 35
C7  = 36
C8  = 37

swap	= @$(eval C0=$(C1)) @$(eval C1=$(C2)) @$(eval C2=$(C3)) @$(eval C3=$(C4)) @$(eval C4=$(C5)) @$(eval C5=$(C6)) @$(eval C6=$(C7)) @$(eval C7=$(C8)) @$(eval C8=$(C0))
cleanL  = printf '\033[0A\033[2K\033[0A\033[2K\033[0A\033[2K\033[0A\033[2K\033[0A\033[2K\033[0A\033[2K\033[0A\033[2K\033[0A\033[2K\033[0A\033[2K'
title   = printf '              \033[%dm_                                 \033[%dm_ \n' "$(C2)" "$(C8)"; \
		  printf '\033[%dm     /\\\033[%dm      | |                               \033[%dm| |\n' "$(C1)" "$(C2)" "$(C8)"; \
		  printf '\033[%dm    /  \\\033[%dm   __| | \033[%dm___  \033[%dm___ \033[%dm____ \033[%dm  ___ \033[%dm _ __ \033[%dm  __| |\n' "$(C1)" "$(C2)" "$(C3)" "$(C4)" "$(C5)" "$(C6)" "$(C7)" "$(C8)"; \
		  printf '\033[%dm   / /\\ \\\033[%dm / _  |\033[%dm/ _ \\\033[%dm/ __|\033[%dm  _ \\ \033[%dm/ _ \\\033[%dm|  _ \\\033[%dm / _  |\n' "$(C1)" "$(C2)" "$(C3)" "$(C4)" "$(C5)" "$(C6)" "$(C7)" "$(C8)"; \
		  printf '\033[%dm  / ____ \\\033[%dm (_| |  \033[%dm__/\033[%dm\\__ \\\033[%dm |_) |\033[%dm (_) \033[%dm| | | | \033[%dm(_| |\n' "$(C1)" "$(C2)" "$(C3)" "$(C4)" "$(C5)" "$(C6)" "$(C7)" "$(C8)"; \
		  printf '\033[%dm /_/    \\_\\\033[%dm____|\033[%dm\\___|\033[%dm|___/\033[%dm .__/ \033[%dm\\___/\033[%dm|_| |_|\033[%dm\\____|\n' "$(C1)" "$(C2)" "$(C3)" "$(C4)" "$(C5)" "$(C6)" "$(C7)" "$(C8)"; \
		  printf '                         \033[%dm| |                      \n' "$(C5)"; \
		  printf '                         \033[%dm|_|                      \n' "$(C5)";

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@if [ $(ALREADY_OBJ)x == xx ]; then \
		$(call cleanL); \
	fi
	@mkdir -p $(OBJDIR)
	@$(call title)
	@$(call swap)
	printf '\033[42m\033[31m[ ✔ ]\033[49m\033[39m %d / %d - %-38s                  \n' $$(( $(COBJS) + 1)) $(CSRCS) "$<"
	$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<
	@$(eval ALREADY_OBJ=x)

clean:
	$(RM) $(OBJDIR)

fclean:
	$(RM) $(OBJDIR) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
