find . -name "*.c" -type f -exec cc -Wall -Wextra -Werror -c {} \;
ar rcs libft.a *.o
find . -name "*.o" -type f -delete
