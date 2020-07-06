#include <iostream>

using namespace std;

int main() {
	enum color {red = 255, green = 0, blue = 255} c;

	cout << '(' << red << ", ";
	cout << green << ", ";
	cout << blue << ')';
	cout << endl;
}
