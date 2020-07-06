#include <iostream>

using namespace std;

// pre-defined multiplication
int _multi_1(int arg1, int arg2) {return arg1 * arg2;}

// multiplication using sequential-addition
int _multi_2(int arg1, int arg2) {
	if (arg1 == 0 || arg2 == 0)	return 0;
	else {
		int s = 0;
		while(arg2 != 0) {
			s += arg1;
			arg2 -= 1;
		}
		return s;
	}
}

int main() {
	int v1 = 12;
	int v2 = 3;

	cout << "[pre-def-multi]\t: " << _multi_1(v1, v2) << endl;
	cout << "[sqe-add-multi]\t: " << _multi_2(v1, v2) << endl;

	return 0;
}
