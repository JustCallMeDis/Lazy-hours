#include <iostream>
#include <cstring>

//Ez itt a polinom osztály printerének része, ami a float cuccokkal kapcsolatos problémákat oldja meg

int main()
{
	double d = 3.14;
	int i1;
	int i2;
	char *ptr = reinterpret_cast < char* > (&d); //helyette: char *ptr = (char *) &d; <-- Javaban gyakori konverzió

	memcpy( &i1, &d, sizeof(i1) );	//ez itt az integer rész
	memcpy( &i2, ptr + 4, sizeof(i2) );	//ez itt a levegőpont utáni rész

	std::cout << sizeof(d) << ' ' << sizeof(int) << '\n';
	
	return 0;

}
