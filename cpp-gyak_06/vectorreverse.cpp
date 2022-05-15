#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vi;
	int d;

	while (std::cin >> d)
	{
		vi.push_back(d);
		std::cout << "size() = " << vi.size()
			  << ", capacity() = " << vi.capacity() << '\n';
	}
	for (int i = vi.size()-1; i >=0; --i)
	{
		std::cout << vi[i] << '\n';
	}
	
	return 0;
}

