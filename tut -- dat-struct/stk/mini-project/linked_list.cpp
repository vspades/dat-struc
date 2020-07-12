#include <iostream>
using namespace std;

// course
struct c_node {
	string c_id;
	c_node *nextC;
};

c_node *c_root;
c_node *c_cond;
c_node *c_p;
c_node *c_q;

// student
struct s_node {
	int s_id;
	string s_name;
	s_node *nextS;
	c_node *nextC;
};

s_node *s_root;
s_node *s_cond;
s_node *s_p;
s_node *s_q;

void init_s_node() {
	s_root = new s_node;
	s_root->nextS = 0;
	s_root->nextC = 0;
	s_root->s_id = 0;
	s_root->s_name = "";
}

void init_c_node() {
	c_root = new c_node;
	c_root->nextC = 0;
	c_root->c_id = "";
}

void add_c_node(string arg1) {
	c_cond = c_root;
	if ( c_cond != 0 ) {
		while ( c_cond->nextC != 0)
	  		c_cond = c_cond->nextC;
  	}
	c_cond->nextC = new c_node;
	c_cond = c_cond->nextC;
	c_cond->nextC = 0;
	c_cond->c_id = arg1;
}

void c_traverse() {
	c_cond = c_root;
	while ( c_cond != 0) {
		if(c_cond->c_id != "") cout << c_cond->c_id << endl;
        	c_cond = c_cond->nextC;
    	}
}

void s_traverse() {
	s_cond = s_root;
	while ( s_cond != 0) {
		if(s_cond->s_id != 0) cout << s_cond->s_id << endl;
        	s_cond = s_cond->nextS;
    	}
}

bool c_search(string arg1) {
	c_cond = c_root;
	while ( c_cond != 0) {
		if ( c_cond->c_id == arg1 )
			return 1;
        	c_cond = c_cond->nextC;
    	}
}

bool s_search(int arg1) {
	s_cond = s_root;
	while ( s_cond != 0) {
		if ( s_cond->s_id == arg1 )
			return 1;
        	s_cond = s_cond->nextS;
    	}
}

void c_remove(string arg1) {
	c_cond = c_root;
	while ( c_cond != 0) {
		if ( c_cond->c_id == arg1 && c_cond->nextC != 0) {
			c_p = c_root;
			c_q = c_cond->nextC;
			while(c_p->nextC != c_cond) {
				c_p = c_p->nextC;
			}
			c_p->nextC = c_q;
			c_cond->nextC = 0;
			c_cond->c_id = "";
			c_cond = c_q;
			c_p = c_root;
			c_q = c_root;
		}
		if ( c_cond->c_id == arg1 && c_cond->nextC == 0) {
			c_p = c_root;
			while(c_p->nextC != c_cond) {
				c_p = c_p->nextC;
			}
			c_cond->c_id = "";
			c_cond = c_p;
			c_cond->nextC = 0;
			c_p = c_root;
			c_q = c_root;
		}
        	c_cond = c_cond->nextC;
	}
}

void s_remove(int arg1) {
	s_cond = s_root;
	while ( s_cond != 0) {
		if ( s_cond->s_id == arg1 && s_cond->nextS != 0) {
			s_p = s_root;
			s_q = s_cond->nextS;
			while(s_p->nextS != s_cond) {
				s_p = s_p->nextS;
			}
			s_p->nextS = s_q;
			s_cond->nextS = 0;
			s_cond->s_id = 0;
			s_cond = s_q;
			s_p = s_root;
			s_q = s_root;
		}
		if ( s_cond->s_id == arg1 && s_cond->nextS == 0) {
			s_p = s_root;
			while(s_p->nextS != s_cond) {
				s_p = s_p->nextS;
			}
			s_cond->s_id = 0;
			s_cond = s_p;
			s_cond->nextS = 0;
			s_p = s_root;
			s_q = s_root;
		}
        	s_cond = s_cond->nextS;
	}
}

void add_s_node(int arg1, string arg2) {
	s_cond = s_root;
	if ( s_cond != 0 ) {
		while ( s_cond->nextS != 0)
	  		s_cond = s_cond->nextS;
  	}
	s_cond->nextS = new s_node;
	s_cond = s_cond->nextS;
	s_cond->nextS = 0;
	s_cond->s_id = arg1;
	s_cond->s_name = arg2;
}

int main()
{
	cout << string(50, '\n');
	init_s_node();
	init_c_node();
	int x = 0;
	int s_id = 0;
	string s_name = "";
	string c_name = "";

	while(x != 6){
		cout << string(50, '\n');
		cout << endl << endl;
		cout << "=========================================================" << endl;
		cout << "1. Add Student" << endl;
		cout << "2. " << endl;
		cout << "3. " << endl;
		cout << "4. " << endl;
		cout << "5. " << endl;
		cout << "6. Exit" << endl;

		cout << endl;

		cout << "Select an option[1-6]: "; cin >> x;

		if(x == 1) {
			cout << '\t' << "Student ID: "; cin >> s_id;
			cout << '\t' << "Student Name: "; cin >> s_name;
			add_s_node(s_id, s_name);
			cout << "Student <" << s_id << "> has been added." << endl;
			cin.get();	cin.get();
		}

		else if(x == 2) {
			cout << "Under Construction ..." << endl;
			cin.get();	cin.get();
		}
		else if(x == 3) {
			cout << "Under Construction ..." << endl;
			cin.get();	cin.get();
		}
		else if(x == 4) {
			cout << "Under Construction ..." << endl;
			cin.get();	cin.get();
		}
		else if(x == 5) {
			cout << "Under Construction ..." << endl;
			cin.get();	cin.get();
		}
		else if(x == 6) {
			cout << "EXIT ..." << endl;
			cin.get();	cin.get();
		}
		else	{
			cout << "Invalid Choice" << endl;
			cin.get();	cin.get();
		}
	}
}
