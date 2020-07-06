// divisors of a dividend

#include <stdio.h>

void main() {
	int v1 = 6;	//dividend

	printf("divisors of %i", v1);
	printf("\n");
	printf("--------");
	printf("\n");

	int v3 = 0;	//remainder
	int v2 = 1;	//divisor
	while(v2 <= v1) {
		v3 = v1 % v2;
		if(v3 == 0) {
			printf("%i", v2);
			printf("\n");
		}
		v2 = v2 + 1;
	}
}
