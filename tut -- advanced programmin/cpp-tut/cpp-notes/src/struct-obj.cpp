// lib(s) and header(s)
#include <iostream>
#include <string>
// name-space(s)
using namespace std;
// <planet>-structure
struct planet {
	string name;
	float distance;
	float radius;
};
// <mars>-object
planet mars;
// main
int main() {
	// inits <mars>-object's variable(s).
	mars.name = "Mars";
	mars.distance = 1.5;
	mars.radius = 0.4;
	// displays <mars>-object's features.
	cout << "planet's name:\t\t\t"<< mars.name << endl;
	cout << "distance from Sun in AU:\t" << mars.distance << endl;
	cout <<"radius in Earth-Radii:\t\t" << mars.radius << endl;
}
