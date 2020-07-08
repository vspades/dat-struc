#include <iostream>

using namespace std;

int v1 = 0;

void f() {
	int v1 = 1;
	cout << "local variable:\t\t" << v1 << endl;
}
