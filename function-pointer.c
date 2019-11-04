#include <stdio.h>
#include <stdlib.h>

typedef int (*func_t)(int);

func_t get_mult(int x) {
	int func(int a) {
		return a * x;
	}
	return &func;
}

int main() {
	int x = 100;

	func_t func1 = get_mult(1);
	printf("%d\n", func1(x)); // 100

	func_t func2 = get_mult(2);
	printf("%d\n", func2(x)); // 200

	return 0;
}
