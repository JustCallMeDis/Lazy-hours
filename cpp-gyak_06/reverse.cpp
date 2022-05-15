#include <iostream>

int main()
{

	int bufsize = 4;
	int *buffer = new int[bufsize];
	int cnt = 0; 
	int d;

/*	for ( int i = 0; i < bufsize; ++i )
	{
		int d;
		if ( std::cin >> d )
		{
			buffer[i] = d;
			++cnt;
		}
		else
		{
			break;
		}
	}
*/

	while ( std::cin >> d )
	{
		if ( cnt == bufsize )	//ezen a részen 4-ből 8, majd 8-ból 16 hosszú memóriahelyeket csinál
		{			//ez azért fasza, mivel egyre lassabban kell új tárterületet felszabadítani
			int *p = new int[2*bufsize];
			for ( int i = 0; i < bufsize; ++i )
			{
				p[i] = buffer[i];
			}				
			delete [] buffer;
			buffer = p;
			bufsize *= 2;
		}

		buffer[cnt] = d;
		++cnt;
	}

	for (int i = cnt - 1; i >= 0; --i )
	{
		std::cout << buffer[i] << '\n';
	}

	return 0;
}
