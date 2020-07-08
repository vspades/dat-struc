#include <iostream>

using namespace std;

int main() {
	cout << "[1] back-slash -----------------" << endl;
	cout << "typed-in:\t" << "\\\\" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "\\" << endl;
	cout << endl;
	//
	cout << "[2] quotation-mark -------------" << endl;
	cout << "typed-in:\t" << "\\\"" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "\"" << endl;
	cout << endl;
	//
	cout << "[3] bell-(a)lert ---------------" << endl;
	cout << "typed-in:\t" << "\\a" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "\adid you hear anything?" << endl;
	cout << endl;
	//
	cout << "[4] (b)ack-space ---------------" << endl;
	cout << "typed-in:\t" << "foo\\bbar" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "foo\bbar" << endl;
	cout << endl;
	//
	cout << "[5] (n)ew-line -----------------" << endl;
	cout << "typed-in:\t" << "foo\\nbar" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "foo\nbar" << endl;
	cout << endl;
	//
	cout << "[6] carriage-(r)eturn ----------" << endl;
	cout << "typed-in:\t" << "foo\\rbar" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "foo\rbar" << endl;
	cout << endl;
	//
	cout << "[7] horizontal-(t)ab -----------" << endl;
	cout << "typed-in:\t" << "foo\\tbar" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "foo\tbar" << endl;
	cout << endl;
	//
	cout << "[8] (v)ertical-tab -------------" << endl;
	cout << "typed-in:\t" << "foo\\vbar" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "foo\vbar" << endl;
	cout << endl;
	//
	cout << "[9] (f)orm-(f)eed --------------" << endl;
	cout << "typed-in:\t" << "foo\\fbar" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "foo\fbar" << endl;
	cout << endl;
	//
	cout << "[10] (o)ctal -------------------" << endl;
	cout << "typed-in:\t" << "\\077" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "\077" << endl;
	cout << endl;
	//
	cout << "[11] he(x) ---------------------" << endl;
	cout << "typed-in:\t" << "\\xFF" << endl;
	cout << "printed-out:\t" << "--" << endl;
	cout << "\xFF" << endl;
	cout << endl;
}
