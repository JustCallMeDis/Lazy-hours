#include <iostream>
#include <iomanip>

int main()
{
	double fahr;

	while (std::cin >> fahr)
	{
		double cels = 5./9.*(fahr-32);
		std::cout << std::setw(8) << fahr << "F = " << std::setw(8) << cels << "C\n";
	}
	std::cerr << "A szamolas vege\n";
	return 0;
}
