test:
	gcc test.c -O2 -static -Wall -Werror -Wextra -o test

clean:
	rm -f test