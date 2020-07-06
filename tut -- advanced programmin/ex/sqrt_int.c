// integer SQRT root

#include <stdio.h>

void main() {
	int n = 20;

	int s = 0;
	int c = 0;
	int a = 1;
	while(s < n) {
		s = s + a;
		if(s > n)
			break;
		c++;
		a = a + 2;
	}
	printf("integer SQRT root of <%i>: %i", n, c);
	printf("\n");
}

// TRY --
// n = 9
// n= 20
