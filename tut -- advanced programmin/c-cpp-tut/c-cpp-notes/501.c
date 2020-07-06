#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char* argv[]) {
	if (argc < 2)	printf("URL missed.\n");
	else {
		char cmd[2048];
		strcpy(cmd, "wget '");
		strcat(cmd, argv[1]);
		strcat(cmd, "'");
		system(cmd);
		printf("\n");
	}
}
