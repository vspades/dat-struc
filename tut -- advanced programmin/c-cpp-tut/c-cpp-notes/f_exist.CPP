#include <iostream>
#include <fstream>

using namespace std;

bool f_exist(string arg1) {
	ifstream FILE(arg1);
	if (FILE)	return true;
	else			return false;
	FILE.close();
}

int main(int argc, char* argv[]) {
	string flag = "False";
	if (f_exist((string) argv[1]))	flag = "True";
	cout << "Exists? " << "[ " << argv[1] << " ]" << ": " << flag << endl;
}
