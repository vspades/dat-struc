#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout << "size of <bool>:"			<< setw(5) << sizeof(bool)		<< endl;
	cout << "size of <char>:"			<< setw(5) << sizeof(char)		<< endl;
	cout << "size of <int>:"			<< setw(6) << sizeof(int)			<< endl;
	cout << "size of <double>:"		<< setw(4) << sizeof(double)	<< endl;
	cout << "size of <wchar_t>:"	<< setw(2) << sizeof(wchar_t)	<< endl;
	cout << "size of <string>:"		<< setw(4) << sizeof(string)	<< endl;
}
/*
pattern:	[...] [...] (...)

signed
unsigned

short
long

ex. unsigned short int
*/
