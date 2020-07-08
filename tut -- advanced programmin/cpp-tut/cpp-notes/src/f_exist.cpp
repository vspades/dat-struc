// lib(s) and header(s)
#include <iostream>
#include <fstream>
// namespace(s)
using namespace std;
// f_exist: checks whether a file or folder exists or not.
bool f_exist(string arg1) {
	ifstream FILE(arg1);
	if (FILE)	return true;
	else			return false;
	FILE.close();
}
// main
int main(int argc, char* argv[]) {
	// checks for number of arg(s).
	if (argc < 2) {
		cout << "[FAILED] no argument(s) supplied." << endl;
		cout << "exists --help" << endl;
		return 0;
	}
	// help
	if ((string) argv[1] == "--help") {
		cout << "[exists] checks whether a file or folder exists or not." << endl;
		cout << endl;
		cout << "-----------------------------------" << endl;
		cout << "[PATTERN] exists <path-to-file|dir>" << endl;
		cout << "-----------------------------------" << endl;
		cout << "checks for a file or directory exists or not." << endl;
		return 0;
	}
	// prepares arg.
	string v1 = (string) argv[1];
	if (f_exist(v1))	cout << "[OK] <" << argv[1] << "> exists." << endl;
	else	cout << "[FAILED] no such file or directory." << endl;
}
