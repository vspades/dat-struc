#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	time_t t;
/*initialization*/
/*the seed would be important to replicate results*/
/*skip this line to have the same result for repeating the experiment*/
	srand((unsigned) time(&t));

/*a random numbers from 0 to 49*/
	printf("%d\n", rand() % 50);
}
