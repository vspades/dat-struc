#include <iostream>

using namespace std;

int main() {
	float deg = 0.0;

	cout << "Entry: ";	cin >> deg;
	cout << "Celsius to Fahrenheit:" << "\t" << 9 / 5 * (deg) + 32 << endl;
	cout << "Celsius to Kelvin:" << "\t" << deg + 273 << endl;
	cout << "Kelvin to Fahrenheit:" << "\t" << 9 / 5 * (deg - 273) + 32 << endl;
	cout << "Kelvin to Celsius:" << "\t" << deg - 273 << endl;
	cout << "Fahrenheit to Celsius:" << "\t" << 5 / 9 * (deg - 32) << endl;
	cout << "Fahrenheit to Kelvin:" << "\t" << 5 / 9 * (deg - 32) + 273 << endl;

	return 0;
}
