#include <iostream>
#include <string>
using namespace std;

class A {
public:
	void f() {
		cout << "A::f()" << endl;
	}
	void g(double d) {
		cout << "A::g(double)" << endl;
	}
	void g(string s) {
		cout << "A::g(string)" << endl;
	}
	void h(char c) {
		cout << "A::h(char)" << endl;
	}
	void h(string s) {
		cout << "A::h(string)" << endl; // h definition 1
	}
};

class B : public A {
public:
	void g(int i) {
		cout << "B::g(int)" << endl;
	}
	void h(int i) {
		cout << "B::h(int)" << endl;
	}
	void h(string s) {
		cout << "B::h(string)" << endl; // h definition 2 
										// h wird zweimal gleich definiert. Es besteht keine M�glichkeit f�r den Compiler die Funktionen zu unterscheiden
	}
};

int main() {
	A a;
	B b;
	cout << "a.f() "; 
	a.f();    
	cout << "b.f() "; 
	b.f();     
	cout << "a.g(1.2) "; 
	a.g(1.2);  
	cout << "b.g(1.2) "; 
	b.g(1.2);  
	cout << "a.g(1) "; 
	a.g(1);    
	cout << "b.g(1) "; 
	b.g(1);    
	cout << "a.g('a') "; 
	a.g('a');  
	cout << "b.g('a') "; 
	b.g('a');  
	cout << "a.g(\"a\") "; 
	a.g("a");  
	cout << "b.g(\"a\") "; 
	b.A::g("a"); // mit "" Wird die eingabe als String interpretiert
	cout << "a.h(1) "; 
	a.h(1);    
	cout << "b.h(1) "; 
	b.h(1);   
	cout << "a.h('a') "; 
	a.h('a');  
	cout << "b.h('a') "; 
	b.h('a'); 
	cout << "a.h(\"a\") "; 
	a.h("a");  
	cout << "b.h(\"a\") "; 
	b.h("a"); 
	return 0;
}

