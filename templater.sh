#!/bin/bash

echo "$1\\tft_$2($3)\\n{}" > ft_$2.c

cp test_template tests/ft_$2-main.c
sed -i -e "s/FUNCTION/$2/g" tests/ft_$2-main.c
sed -i -e "s/input/$3/g" tests/ft_$2-main.c
sed -i -e "s/correct/$1 correct/g" tests/ft_$2-main.c

sed -i -e "0,/;/ s//;\n\t$1\tft_$2($3);/" libft.h

# echo $2\; >> libft.h
