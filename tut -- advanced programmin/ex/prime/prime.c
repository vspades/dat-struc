// prime number

#include <stdio.h>
#include <stdbool.h>

void main() {
	int n = 23;
	bool prime = 1;

	if(n == 2)
		prime = 1;

	int k = 0;
	int p = 2;
	while(p <= n/2) {
		k = n % p;
		if (k == 0)
			prime = 0;
		p = p + 1;
	}

	if(prime == 1) {
		printf("%i is prime.", n);
		printf("\n");
	}
	else {
		printf("%i is NOT prime.", n);
		printf("\n");
	}
}
