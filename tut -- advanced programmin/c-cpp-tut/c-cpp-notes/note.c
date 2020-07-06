/*
	The syntax of the C programming language is described as "strong-typed".
	Another similar languages with such "syntax complexity" are C++ and Java.
*/

// Ex. Hello-World!
#include <stdio.h>

void main() {
	printf("hello!\n");
}

/*
	The "goto" method is one obsoleted feature of the C, which has replaced by
	structured methods like, "for-loops" and "if-conditions".
*/

// Ex. GoTo
#include <stdio.h>

int main() {
	for(int i = 0; i < 8; i++) {
		printf("Who?\n");
		if(i == 2)	goto L1;
	}

	L1:	{
			printf("Me!\n");
			return(0);
	}
}

/*
	It would be cost-efficient in terms of "memory-blocks usage" to pass a
	variable to a function via a method known as pass-by-reference.
*/

//Ex. Pass-By_Reference

#include <stdio.h>

int inc(int *);

void main() {
	int v = 0;
	printf("%d\n", v);

	v = inc(&v);
	printf("%d\n", v);
}

int inc(int *arg1) {
	*arg1 += 1;
	return *arg1;
}

/*
	Also, to pass multiple variables, we need to enqueue them all inside one
"array". An array is a list of homogeneous elements of the same type and size.
*/

//Ex. String: Passing an array of type "char" to a function:
#include <stdio.h>
#include <string.h>

void println(char *arg1) {
	size_t n = strlen(arg1);

	for (int i = 0; i < n; i++)	printf("%c", arg1[i]);
	printf("\n");
}

void main(int argc, char *argv[]) {
	if(argc < 2)	println("hello!");
	else		println(argv[1]);
}

// Ex. non-String: Passing an array of type "int", "float", ... to a function:
#include <stdio.h>

#define NELEMS(x)	(sizeof(x) / sizeof((x)[0]))

void disp(float *, int);

void main() {
	float v[] = {1., 3.2, 2.5, 1, 4, 10, 13, 8, 0, -3};
	int len = NELEMS(v);

	disp(v, len);
}

void disp(float *arg1, int arg2) {
	for(int i = 0; i < arg2; i++)
		printf("%f ", arg1[i]);

	printf("\n");
}

// Ex. Passing an array of string-type elements to a function:
#include <stdio.h>
#include <string.h>

#define NELEMS(x)	(sizeof(x) / sizeof((x)[0]))

void disp(char **, int);

void main() {
	char *v[] = {"foo", "bar", "foobar", "baz"};
	int len = NELEMS(v);
	disp(v, len);
}

void disp(char **arg1, int arg2) {
	for(int i = 0; i < arg2; i++) {
		for(int j = 0; j < strlen(arg1[i]); j++)
			printf("%c", arg1[i][j]);
		printf("\n");
	}
}

/*
	A function might as well "return" a variable or an array of variables.
*/

// Ex. A function returns an array.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* f1() {
	srand((unsigned) time(NULL));

	static int r[8];
	for (int i = 0; i < 8; i++)
		r[i] = rand();
	return r;
}

void main() {
	int* p;
	p = f1();
	for (int i = 0; i < 8; i++)	printf("%d\n", *(p + i));
}

// Ex. A function returns a string.
#include <stdio.h>

const char* f1() {
	char* v[] = {"foo"};
	return v[0];
}

void main() {
	const char* v = f1();
	printf("%s\n", v);
}
