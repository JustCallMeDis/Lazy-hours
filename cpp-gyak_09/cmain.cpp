#include <iostream>
#include "complex.h"

int main()
{
	Complex a{1.2, 3.14};   // = 1.2 + 3.14i
	Complex b;      // = {0.0,0.0}
	const Complex c{3.14};
	Complex d = a + a;
	Complex e = ~a;	//komplex konjugált
	
        std:: cout << "a = [ " << a.real() << ", " << a.imag() << "i ]\n";
	std:: cout << "b = [ " << b.real() << ", " << b.imag() << "i ]\n";
	std:: cout << "c = [ " << c.real() << ", " << c.imag() << "i ]\n";
	std:: cout << "a + a = [ " << d.real() << ", " << d.imag() << "i ]\n";
	std:: cout << "~a = [ " << e.real() << ", " << e.imag() << "i ]\n";
	

	return 0;
}

