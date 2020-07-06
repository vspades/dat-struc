#include <stdio.h>

void main() {
	int n = 6;

	int a = 1;
	int s = 0;
	int p = 0;
	while(a <= n/2) {
		p = n % a;
		if(p == 0) {
			s = s + a;
		}
		a++;
	}

	if(s == n) {
		printf("<%i> is perfect.", n);
	}
	else {
		printf("<%i> is NOT perfect.", n);
	}
	printf("\n");
}
