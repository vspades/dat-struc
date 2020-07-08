#include <iostream>
#include <array>
#include <vector>

using namespace std;

void f1(string arg1) {
	cout << arg1 << endl;
}

void f2(array<int,3> arg1) {
	for(short int i = 0; i < arg1.size(); i++)	cout << arg1[i] << "\t";
	cout << endl;
}

void f3(vector<string> arg1) {
	for(short int i = 0; i < arg1.size(); i++)	cout << arg1[i] << "\t";
	cout << endl;
}

int main() {
	string v1 = "bar";
	array<int,3> v2 = {1,2,3};
	vector<string> v3 = {"foo", "bar", "baz"};

	f1(v1);
	f2(v2);
	f3(v3);
}
