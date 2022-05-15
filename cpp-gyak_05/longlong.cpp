#include <iostream>
#include <cstring>


int main()
{
	double d = 3.14;
	long long l;	//int64_t l is lehetne, ez 64 bites integer lenne
	/*
	
	 uint64_t *lp;         <--- ez majd csak később lesz
	 lp = (uint64_t *)&d;
	
	*/
		
	memcpy( &l, &d, sizeof(l));

	std::cout << sizeof(d) << ' ' << sizeof(l) << '\n';
	std::cout << "d= " << d << " l= " << l << '\n';
		
	return 0;
}
