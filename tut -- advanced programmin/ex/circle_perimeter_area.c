// cricle -- perimeter | area

#include <stdio.h>
#include <math.h>
#define PI 3.14
#define R 4

void main() {
	float area = 0;
	float peri = 0;

	area = PI * pow(R,2);
	peri = (2 * R) * PI;

	printf("circle-radius:\t%i", R);
	printf("\n");

	printf("--------------");
	printf("\n");
	printf("\n");

	printf("perimeter:\t%f", peri);
	printf("\n");
	printf("area:\t\t%f", area);
	printf("\n");
}
