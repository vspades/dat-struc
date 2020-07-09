// "horse-saddle" point
// P(i,j):
// [P is MIN in <i> row] also [P is MAX in <j> column]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	time_t t;
	srand((unsigned) time(&t));

	// create matrix
	int m = 3;
	int n = 4;
	int v[m][n];
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			v[i][j] = rand() % 100;

	// diplay matrix
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++)
			printf("%i ", v[i][j]);
		printf("\n");
	}
	//
	printf("\n");
	// Z
	int min = 0;
	int max = 0;
	int ind = 0;
	int z[m*n];	// ERROR --
							// all elements could b "horse-saddle" point!
							// ex. all of them could of be the same value:
							// V = [1 1 1 1 1 1].reshape(2,3)
	int zz = -1;
	int c = 0;
	while(c < m) {
		min = v[c][0];
		for(int i = 0; i < n; i++) {
			if(v[c][i] < min) {
				min = v[c][i];
				ind = i;
			}
			max = 0;
			for(int j = 0; j < m; j++)
				if(v[j][ind] > max)
					max = v[j][ind];
		}
		if(min == max) {	// <--
			z[c] = min;
		}
		else
			z[c] = -1;
		c += 1;
	}
	for(int i = 0; i < 3; i++)
		if(z[i] != -1) {
			printf("Z: %i\n", z[i]);
			zz = z[i];
		}

	// diplay matrix-map
	printf("matrix-map:\n");
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 4; j++)
			if(v[i][j] == zz)
				printf("#");
			else
				printf(".");
		printf("\n");
	}
}
