# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kokaimov <kokaimov@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 16:18:55 by kokaimov          #+#    #+#              #
#    Updated: 2023/11/19 16:19:01 by kokaimov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=			libftprintf.a

SRC_PATH :=		srcs/
INC_PATH :=		includes/
LIB_PATH :=		libft/
OBJ_PATH :=		.obj/

CC :=			cc
CFLAGS :=		-g -Wall -Wextra -Werror
AR :=			ar rc
IFLAGS :=		-I $(INC_PATH) -I $(LIB_PATH)
LFLAGS :=		-lft -L $(LIB_PATH)

HFILES :=		ft_printf
FILES :=		utils\
				ft_printf\
				ft_putnbr_base
LFILES :=		ft_strlen
LIB :=			$(LIB_PATH)libft.a

HDRS :=			$(addprefix $(INC_PATH), $(addsuffix .h, $(HFILES)))
SRCS :=			$(addprefix $(SRC_PATH), $(addsuffix .c, $(FILES)))
LSRCS :=		$(addsuffix .c, $(LFILES))
OBJS :=			$(addprefix $(OBJ_PATH), $(SRCS:%.c=%.o))
LOBJS :=		$(addprefix $(LIB_PATH), $(LSRCS:%.c=%.o))

all: $(NAME)

$(NAME): $(LIB) $(OBJ_PATH) $(OBJS)
	$(AR) $(NAME) $(OBJS) $(LOBJS)
$(LIB):
	$(MAKE) -C $(dir $@) $(notdir $@)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)$(SRC_PATH)
$(OBJ_PATH)%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean: mclean
	make clean -C $(LIB_PATH)
fclean: mfclean
	make fclean -C $(LIB_PATH)
re: fclean all

mclean:
	rm -f $(OBJS) $(DEPS)
mfclean:
	rm -f $(NAME)
	rm -rf $(OBJ_PATH)
mre: mfclean all

.PHONY: all clean fclean re mclean mfclean mre