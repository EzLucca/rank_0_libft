#!/bin/bash

# Check if a filename is provided
if [ -z "$1" ]; then
    echo "Usage: $0 filename.c"
    exit 1
fi

# Get the filename from the first argument
FILE=$1

# Compile the C file
cc "$FILE.c" "tests/$FILE-main.c"

# Check if compilation succeeded
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running program..."
    ./a.out
else
    echo "Compilation failed."
    exit 1
fi

# Clean up
rm -f a.out
echo "Cleaned up: a.out removed."

