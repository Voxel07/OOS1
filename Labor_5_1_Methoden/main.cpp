#include <iostream>
#include <string>


void p(std::string s, bool nl = true) {
	std::cout << s << " ";
	if (nl) { std::cout << std::endl; }
}

class A {
public:
	void f1() { p("A::f1()"); }
	virtual void f2() { p("A::f2()"); }
	void f3() { p("A::f3()"); }
	void f4() { p("A::f4()", false); f2(); }
};

class B : public A {
public:
	void f1() { p("B::f1()"); }
	void f2() { p("B::f2()"); }
	void f3() { p("B::f3()"); }
	virtual void f4() { p("B::f4()", false); f2(); }
};

class C :  public B {
public:
	void f1() { p("C::f1()"); }
	void f2() { p("C::f2()"); }
	virtual void f3() { p("C::f3()"); }
	void f4() { p("C::f4()", false); f2(); }
};

class D : public C {
public:
	void f1() { p("D::f1()"); }
	void f2() { p("D::f2()"); }
	void f3() { p("D::f3()"); }
};

int main() {
	D d;
	A * aptr = &d;
	B * bptr = &d;
	C * cptr = &d;

	//ABC da nicht virtuell
	aptr->f1();//A::f1()
	bptr->f1();
	cptr->f1();

	//D da f2 virtuell ist
	aptr->f2();//D::f2()
	bptr->f2();
	cptr->f2();
	
	aptr->f3();//A
	bptr->f3();//B
	cptr->f3();//D

	aptr->f4();//A::f4() D::f2()
	bptr->f4();//C::f4() D::f2()
	cptr->f4();//C::f4() D::f2()
}


