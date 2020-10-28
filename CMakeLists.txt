cmake_minimum_required(VERSION 3.16)
project(libft.a)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99 -O2 -m64")

file(GLOB C "*.c")

add_executable(${PROJECT_NAME} ${C} ft_strlcat.c ft_isalnum.c ft_isascii.c ft_isalpha.c ft_isprint.c ft_toupper.c ft_tolower.c)