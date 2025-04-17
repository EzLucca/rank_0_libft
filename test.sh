#!/bin/bash

cc -Wall -Wextra -Werror libft.h ft_$1.c tests/ft_$1-main.c 
echo 'compiler'
./a.out

echo 'norminette'
norminette ft_$1.c
rm a.out
rm libft.h.gch
