// Greatest Common Divisor (GCD)

#include <stdio.h>

void main() {
	int v1 = 32;	//dividend-1
	int v2 = 18; 	//dividend-2

	printf("GCD of <%i> and <%i>: ", v1, v2);

	int p = 0;		//remainder
	p = v1 % v2;
	while(p != 0) {
		v1 = v2;
		v2 = p;
		p = v1 % v2;
	}

	printf("%i", v2);
	printf("\n");
}
