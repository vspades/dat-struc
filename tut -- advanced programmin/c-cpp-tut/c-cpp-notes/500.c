#include <stdio.h>

long double s2n(char* arg1) {
	long double v1 = 0;
	sscanf(arg1, "%Lf", &v1);
	return v1;
}

void main(int argc, char* argv[]) {
	int x = s2n(argv[1]);
	printf("%d\n", x);
	printf("%d\n", x+1);
}
