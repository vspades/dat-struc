#include <stdio.h>

void main() {
	int v1 = 8;
	int *p1;
	p1 = &v1;

	printf("[&intvar]\tlocation of int-var:\t\t%p", &v1);
	printf("\n");
	printf("[intvar]\tcontents of int-var:\t\t%i", v1);
	printf("\n");
	printf("\n");
	printf("[&intptr]\tlocation of int-ptr:\t\t%p", &p1);
	printf("\n");
	printf("[intptr]\tcontents of int-ptr:\t\t%p", p1);
	printf("\n");
	printf("[*intptr]\tvalue that int-ptr points to:\t%i", *p1);
	printf("\n");
}
