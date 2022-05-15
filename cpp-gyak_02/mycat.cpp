#include <iostream>

int main()
{
	char ch;

	std::cin >> std::noskipws;
	
	//  std::cin >> ch;  ez itt spórolós, a while()-ba raktuk a beolvasást
	
	while ( std::cin >> ch )  /* itt most lehetne !std::cin.eof(), de ez így tán jobb is */
	{
		std::cout << ch;
		// std::cin >> ch; innen is a while()-ba raktuk bele a beolvasást
	}
	std::cerr << "end of program\n";
	return 0;

}
