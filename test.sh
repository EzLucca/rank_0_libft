#!/bin/bash

cc -Wall -Wextra -Werror ft_$1.c tests/ft_$1-main.c libft.a -lbsd
echo 'compiling'
./a.out
echo 'norminette check'
norminette ft_$1.c
rm a.out
# rm libft.h.gch
