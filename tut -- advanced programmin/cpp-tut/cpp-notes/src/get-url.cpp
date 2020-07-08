#include <iostream>
#include <stdlib.h>
#include <experimental/string_view>

using namespace std;

int main(int argc, char* argv[]) {
	// missing arg(s)
	if (argc < 2) {
		cout << "[FAILED] invalid number of argument(s)." << endl;
		cout << "get-url --help" << endl;
		exit(0);
	}
	// help
	if (std::experimental::string_view(argv[1]) == "--help") {
		cout << "[get-url] grabs provided <URL> using 'wget'." << endl;
		cout << endl;
		cout << "-----------------------" << endl;
		cout << "[PATTERN] get-url <URL>" << endl;
		cout << "-----------------------" << endl;
		cout << "grabs provided <URL> using 'wget'." << endl;
		exit(0);
	}
	// prepars command.
	string str1 = "wget '";
	str1 += argv[1];
	str1 += "'";
	// runs command.
	string cmd = str1 + " 2>/dev/null";
	system("echo -n '[1] retrieving URL...'");
	int c = system((cmd).data());
	if (c != 0) {
		cout << endl << "[FAILED] " << str1 << endl;
		exit(0);
	}
	else	cout << "done." << endl;
	cout << "[OK] URL retrieved." << endl;
}
// [COMPILE]> g++ -std=c++17 get-url.cpp -o get-url
