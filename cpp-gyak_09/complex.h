#ifndef COMPLEX_H       // #if ! defined(COMPLEX_H)
                        // ha nincs COMPLEX_H, akkor történik meg az include őrszem
#define COMPLEX_H

class Complex
{
public:
	Complex( double re = 0, double im = 0) { re_ = re; im_ = im; }
	//Complex() { re_ = 0.0; im_ = 0.0; }  <-- fentebb default paraméterekkel jobb
        double real () const { return re_; }
        double imag () const { return im_; }
	Complex operator+= (Complex b);
private:        //amúgy automatikusan private minden, ha publikus, azt kell jelezni
        double re_;
	double im_;

};

Complex operator+ ( Complex a, Complex b)
{
	return Complex{ a.real()+b.real(), a.imag()+b.imag() };	//temporális változó
}

Complex operator~ (Complex a)
{
	return Complex{ a.real(), -1 * a.imag() };
}

#endif
