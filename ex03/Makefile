# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/26 14:52:16 by waroonwork@       #+#    #+#              #
#    Updated: 2026/06/26 14:59:12 by waroonwork@      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	program

CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -g3 -std=c++98
SUFFIX		:=	.cpp

INC_DIR		:=	includes/
SRCS_DIR	:=	srcs/

SRCS_FILES	:=	main Fixed Point

SRCS		:=	$(addsuffix $(SUFFIX), $(addprefix $(SRCS_DIR), $(SRCS_FILES)))
OBJS		:=	$(SRCS:%$(SUFFIX)=%.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS) Makefile
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) $(OBJS) -o $(NAME)

%.o			:	%$(SUFFIX)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean		:
	rm -rf $(OBJS)

fclean		:	clean
	rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re