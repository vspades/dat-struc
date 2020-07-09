#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	srand(time(NULL));

	FILE *fp = NULL;
	fp = fopen("vector.txt", "w");
	for(int i = 0; i < 10; i++) {
		fprintf(fp, "%d\n", rand());
	}
	fclose(fp);
}
