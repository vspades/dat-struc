//accumulator
//0 up to 999,999,999

#include <stdio.h>

#define MAX 1000000000

void main() {
	long double number;
	long double total;

	for(number = 0, total = 0; number < MAX; total += number, number++);

	printf("Total: %Lf\n", total);
}
