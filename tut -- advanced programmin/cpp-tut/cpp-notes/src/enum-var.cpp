#include <iostream>

using namespace std;

int main() {
	enum color {r = 255, g = 255, b = 0} c;
	// displays output.
	cout << "<blue> removed (yellow) -- ";
	cout << "pixel's channel (B, G, R): ";
	cout << "[" << b << ", " << g << ", " << r << "]" << endl;
}
