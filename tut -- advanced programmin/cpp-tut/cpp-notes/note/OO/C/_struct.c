#include <stdio.h>
#include <string.h>

void main() {
	struct Planet {
		char name[10];
		float distance;
		float radius;
	} mars, foo, bar;

	strcpy(mars.name,"Mars");
	mars.distance = 1.531;
	mars.radius = 0.405;


	printf("planetary statistics:");
	printf("\n");
	printf("\n");
	printf("name:\t\t\t\t%s", mars.name);
	printf("\n");
	printf("distance from Sun in AU:\t%0.2f", mars.distance);
	printf("\n");
	printf("radius in Earth radii:\t\t%0.2f", mars.radius);

	printf("\n");
}
