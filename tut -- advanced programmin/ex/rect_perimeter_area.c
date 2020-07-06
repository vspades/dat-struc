// rectangle -- perimeter | area

#include <stdio.h>

void main() {
	int a = 3;
	int b = 14;

	int area = 0;
	int peri = 0;
	area = a * b;
	peri = 2 * (a + b);

	printf("rect-width:\t%i", a);
	printf("\n");
	printf("rect-length:\t%i", b);
	printf("\n");

	printf("------------");
	printf("\n");
	printf("\n");

	printf("perimeter:\t%i", peri);
	printf("\n");
	printf("area:\t\t%i", area);
	printf("\n");
}
