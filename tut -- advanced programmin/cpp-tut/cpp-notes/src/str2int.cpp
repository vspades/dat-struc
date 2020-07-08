// lib(s) and header(s)
#include <iostream>
#include <sstream>
// name-space(s)
using namespace std;
// main
int main() {
	// number in <string> type.
	string v1 = "0";
	// target would be of <integer> type.
	int v2 = 0;
	// s2i: <string> to <integer>.
	stringstream s2i(v1);
	s2i >> v2;
	// evaluates type of v2 by adding 1 to its value.
	cout << "num:\t" << v2 << endl;
	cout << "num+1:\t" << v2 + 1 << endl;
}
