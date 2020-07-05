//accumulator
//0 up to 999,999,999

#include <iostream>

#define MAX 1000000000

using namespace std;

int main() {
	long double number;
	long double total;

	for (number = 0, total = 0; number < MAX; total += number, number++);

	cout << "Total: " << total << endl;

	return 0;
}
