#include <stdio.h>

void main() {
	int n = 5;

	int fact = 1;
	int a = 1;
	while(a <= n) {
		fact = fact * a;
		a = a + 1;
	}

	printf("factorial of %i: %i", n, fact);
	printf("\n");
}
