/*
//5.1
class A: a											(1)
class B: A(a), b									(2)
class C1: B(a, b)									(2)
class C2: B(a, b)									(2)
class C3: B(a, b)									(2)
class D: C1(a, b), C2(a, b), C3(a, b)				(6)

//5.2
a virtuale
class D: C1(b), C2(b), C3(b), a						(4)

//5.3
C1, C2, C3 virtual B
class D: a, b										(2)

C1,C2 || C1,C3 || C2,C3 virtual B
class D: C(a, b) a,b								(4)

D virtual C1 || D virtual C2|| D virtual C3
class D: C1(a, b), C2(a, b), C3(a, b)				(6)

C1,C2 || C1,C3 || C2,C3 virtual B + B virtual A
class D: C(b) a, b									(3)

C1 || C2 || C3 virtual B + B virtual A
class D: C(b) C(b) a, b								(4)

*/S

//5.3
#include <iostream>

class A {
public:
	int a;
	A(int _a) : a(_a) {}
	void print() {
		std::cout << "A: " << a << std::endl;
	}
};
class B : public A {
public:
	int b;
	B(int _a, int _b) : A(_a), b(_b) {}
	void print() {
		std::cout << "B: " << a << ", " << b << std::endl;
	}
};

class C1 : public B {
public:
	C1(int _a, int _b) : B(_a, _b) {}
	void print() {
		//		B::print();
		std::cout << "C1: " << a << ", " << b << std::endl;
	}
};

class C2 : public B {
public:
	C2(int _a, int _b) : B(_a, _b) {}
	void print() {
		//		B::print();
		std::cout << "C2: " << a << ", " << b << std::endl;
	}
};
class C3 : public B {
public:
	C3(int _a, int _b) : B(_a, _b) {}
	void print() {
		//		B::print();
		std::cout << "C3: " << a << ", " << b << std::endl;
	}
};
class D : public C1, virtual public C2, virtual public C3 {
public:
	D(int _a, int _b, int _c, int _d, int _e, int _f)
		: C1(_a, _b), C2(_c, _d), C3(_e, _f) {

	}
	void print() {
		//		B::print();
		std::cout << "D ist: " << std::endl;
		std::cout << "C1: " << C1::a << ", " << C1::b << std::endl;
		std::cout << "C2: " << C2::a << ", " << C2::b << std::endl;
		std::cout << "C3: " << C3::a << ", " << C3::b << std::endl;
	}
};

int main() {
	A alpha(1);
	alpha.print();
	B betta(2, 3);
	betta.print();
	C1 c1(4, 5);
	c1.print();
	C2 c2(6, 7);
	c2.print();
	C3 c3(8, 9);
	c3.print();
	D delta(10, 11, 12, 13, 14, 15);
	delta.print();
	return 0;
}