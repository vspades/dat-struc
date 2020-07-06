// fibonacci sequence

#include <stdio.h>

void main() {
	int n = 20;

	int s = 0;
	int b = 0;
	int a = 1;
	int c = 0;
	while(s < n) {
		c = a + b;
		printf("%i.\t%i", s+1, c);
		printf("\n");
		a = b;
		b = c;
		s++;
	}
}

/**
1.	1
2.	1
3.	2
4.	3
5.	5
6.	8

[...]

19.	4181
20.	6765
**/
