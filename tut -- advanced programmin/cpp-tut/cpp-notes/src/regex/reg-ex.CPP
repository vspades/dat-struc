#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <regex>

using namespace std;

vector <string> v = { "This", "subject", "and", "that", "subject"};

int main (int argc, char* argv[]) {
//	cout << argc << endl;
//	if (argc < 3) {
//		cout << "PATTERN: <src-txt> <RegEx>" << endl;
//		exit(1);
//	}
//	if (regex_match(argv[1], regex(argv[2])))
//		cout << "[ OK ]: matched!" << endl;

	string s = v[1];
//"this subject and that subject";
	regex e(".*je.*");
	if (regex_match(s,e))	cout << "[ OK ]: matched!" << endl;

//	cout << *(s.end()) << endl;
//	cout << *(s.begin()) << endl;
//	if (regex_match(s.begin(), s.end(), e))
//		cout << "[ OK ]: range matched!" << endl;

////	e("(sub)(.*)");
//	cmatch cm;
//	const char* cstr = "subject";
//	regex_match(cstr, cm, e);
//	cout << "string literal with " << cm.size() << " matches\n";

	smatch sm;
//	regex_match(s, sm, e);
//	cout << "string object with " << sm.size() << " matches\n";

//	regex_match(s.cbegin(), s.cend(), sm, e);
//	cout << "range with " << sm.size() << " matches\n";

	std::regex_match(s, sm, e, regex_constants::match_default);
	cout << "the matches were: ";
	for (unsigned i=0; i<sm.size(); ++i)	cout << "[" << sm[i] << "] ";
	cout << endl;
	return 0;
}
