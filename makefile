function-pointer.out: function-pointer.c
	gcc -g -Wall -Werror $^ -o $@

.PHONY = clean
clean:
	rm *.out
