#include "complex.h"

Complex Complex::operator+= (Complex b)
{
	re_ += b.real();
	im_ += b.imag();

	return Compley {re_, im_};
}
