CFLAGS = -Wall -Wextra -O2

run:
	gcc $(CFLAGS) $(FILE) -o out && ./out