#include <iostream>
#include <fstream>

int main (int argc, char *argv[])
{
	std::cout << "argc = " << argc << '\n';
	for (int i = 1 ; i < argc; i++)
	{
		std::cout << "argv[" << i << "] = " << argv[i] << '\n';
		std::ifstream input; //az inputban van egy destruktor, ami be fogja zárni a megnyitott file-okat
		input.open ( argv[i] );
		if (input.good() ) std::cerr << argv[i] << " opened\n";
		else std::cerr << argv [i] << " failed to open\n";
	}
	
	return 0;
}



