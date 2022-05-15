
#include <iostream>
#include <string>


std::string bits (int d);
int main ()
{
	int d;

	while ( std::cin >> d )
	{
		std::cout << d << " == " << bits(d) << '\n';
	}
	return 0;
}

std::string bits (int d)
{
	std::string result;
	for ( unsigned int i = 0; i < sizeof(d)*8 ; ++i)
	{
		if ( (d & 0x1) == 0x1 ) result = '1' + result;
		else result = '0' + result;
		d = d >> 1;
	}
	return result;
}
