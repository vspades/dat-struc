#include <stdio.h>

int f1(int arg1, int arg2) {
	return arg1 / arg2;
}

// division using sequential subtraction
int f2(int arg1, int arg2) {
	int c = 0;
	while(arg1 >= arg2) {
		arg1 = arg1 - arg2;
		c++;
	}
	return arg1;
}

void main() {
	printf("15/4: %i", f1(15,4));
	printf("\n");
	printf("15/4: %i", f2(15,4));
	printf("\n");
}
