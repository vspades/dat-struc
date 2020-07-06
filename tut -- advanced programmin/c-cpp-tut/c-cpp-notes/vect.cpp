#include <iostream>
#include <vector>

using namespace std;

void f1(string arg1) {
	cout << arg1 << endl;
}

void f2(int arg1[]) {
	cout << arg1[0] << endl;
}

void f3(vector<string> arg1) {
	for(short int i = 0; i < 3; i++)	cout << arg1[i] << endl;
}

int main() {
	string v1 = "bar";
	int v2[] = {1,2,3};
	vector<string> v3 = {"foo", "bar", "baz"};

	f1("bar");
	f2(v2);
	f3(v3);
}
