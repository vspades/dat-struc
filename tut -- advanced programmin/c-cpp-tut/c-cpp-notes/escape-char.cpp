#include <iostream>

using namespace std;

int main() {
	cout << "[1] back-slash -----------------" << endl;
	cout << "type-in:\t" << "\\\\" << endl;
	cout << "print-out:\t" << "\\" << endl;
	cout << endl;
	//
	cout << "[2] quotation mark -------------" << endl;
	cout << "type-in:\t" << "\\\"" << endl;
	cout << "print-out:\t" << "\"" << endl;
	cout << endl;
	//
	cout << "[3] did you hear the bell-(a)lert?" << endl;
	cout << "type-in:\t" << "\\a" << endl;
	cout << "print-out:\t" << "\a" << endl;
	cout << endl;
	//
	cout << "[4] (b)ackspace ----------------" << endl;
	cout << "foobar" << " --> " << "foo\bzar" << endl;
	cout << endl;
	//
	cout << "[5] (n)ewline ------------------" << endl;
	cout << "foo\\nbar" << " -->" << endl;
	cout <<"foo\nbar" << endl;
	cout << endl;
	//
	cout << "[6] carriage-(r)eturn ----------" << endl;
	cout << "foo\\rbar" << " -->" << endl;
	cout << "foo\rbar" << endl;
	cout << endl;
	//
	cout << "[7] horizontal-(t)ab -----------" << endl;
	cout << "foo\\tbar" << " -->" << endl;
	cout << "foo\tbar" << endl;
	cout << endl;
	//
	cout << "foo\vbar" << endl; // (v)ertical-tab
	cout << "foo\fbar" << endl; // Form Feed
	cout << "\077" << endl; // (o)ctal
	cout << "\xFF" << endl; // he(x)
}
