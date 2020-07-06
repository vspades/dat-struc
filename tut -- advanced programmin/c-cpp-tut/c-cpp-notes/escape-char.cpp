#include <iostream>

using namespace std;

int main() {
	cout << "\\" << endl;
	cout << "\"" << endl;
	cout << "did you hear the bell alert?\a" << endl;
	cout << "foo\bzar" << endl;	// (b)ackspace
	cout << "foobar\n"; // (n)ew-line
	cout << "foo\rbar" << endl; // carriage-(r)eturn
	cout << "foo\tbar" << endl; // horizontal-(t)ab
	cout << "foo\vbar" << endl; // (v)ertical-tab
	cout << "foo\fbar" << endl; // Form Feed
	cout << "\077" << endl; // (o)ctal
	cout << "\xFF" << endl; // he(x)
}
