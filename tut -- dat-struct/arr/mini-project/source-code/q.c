#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	time_t t;
	srand((unsigned) time(&t));

	int v[10][10];
	for(int i=0; i < 10; i++)
		for(int j=0; j < 10; j++)
			v[i][j] = rand() % 8;

	int v2[10][10];
	for(int i=0; i < 10; i++)
		for(int j=0; j < 10; j++)
			v2[i][j] = 0;

	for(int i=0; i < 10; i++) {
		for(int j=0; j < 10; j++)
			printf("%i ", v[i][j]);
		printf("\n");
	}

	for(int i=0; i < 10; i++)
		for(int j=0; j < 10; j++) {	
			if(i % 2 != 0)
				v2[i][j] = v[i][j];
			if(j % 2 == 0)
				v2[i][j] = v[i][j];
		}

	printf("\n");

	for(int i=0; i < 10; i++) {
		for(int j=0; j < 10; j++)
			printf("%i ", v2[i][j]);
		printf("\n");
	}
}
