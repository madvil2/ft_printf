cmake_minimum_required(VERSION 3.26)
project(ft_printf C)

set(CMAKE_C_STANDARD 11)

add_executable(ft_printf srcs/main.c srcs/utils.c srcs/ft_printf.c srcs/ft_putnbr_base.c libft/ft_strlen.c)
