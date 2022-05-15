#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

template<typename T>
void func( const T& t)
{
	std::cout << t << ", ";
}

template<typename T>
void print(std::vector<T> par)
{
	std::cerr << "empty = " << par.empty()
		  << ", size = " << par.size() << '\n';
	/*for(std::size_t i = 0; i < par.size(); ++i)
	{
		std::cout << par[i] << (i+1 == par.size() ? "\n": ", ");
	}*/
	
	/*for( T t : par)
	{
		std::cout << t << ", ";
	}*/

	/*for (auto it = par.begin(); it != par.end(); ++it)
	{
		std::cout << *it << ( it + 1 == par.end() ? "\n" : ", ");
	}*/
	std::for_each(par.begin(), par.end(), &func<T>);
	std::cout << '\n';

}

int main()
{
	std::vector<int> vec;
	const int max = 100;
	
	print(vec);
	for (int i = 0; i < max; ++i)
	{
		vec.push_back(std::rand());
	}
	vec.push_back( 2084420925);
	std::sort(vec.begin(),vec.end());
	std::unique(vec.begin(), vec.end()); //an unique ()az előbb pusholt dolgot nem letörli, hanem mindig a kövit
	print(vec);			     //fogja berakni. pl 1,2,2,3,4 -> 1,2,3,4,4 az utolsóig csúsztatja
	// auto newend = std::unique()...
	// vec.erase(newend, vec.end()) --> duplikációkig töröl

	//hiperszofisztikált lambda fgv következik:
	//auto r = std::remove_if(vec.begin(), vec.end(), [](int x) {return 1 == x%2;});
	//-->ilyenkor nem kell vec.end()-ig menni, hanem r-ig
	return 0;
}
