#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <iomanip>

void count ( std::istream& inp, std::string fname );
void niceout ( int a, int b, int c, std::string f);

int ch_total = 0, wd_total = 0, nl_total = 0; //GLOBAL VARIABLES

int main(int argc, char *argv[])
{
	if ( argc == 1 ) count (std::cin, " "); //std::cout << "using std::cin\n";
	else
	{
		for (int i = 1 ; i < argc; ++i)
		{
			std:: ifstream input { argv[i] };
			if ( input ) count ( input, argv[i] ); //std::cout << "using file " << argv[i] << '\n';
			else std::cout << "Can't open file " << argv [i] << '\n';

		}
		if ( argc > 2 ) niceout (nl_total, wd_total, ch_total, "total");
	}
	return 0;
}

void niceout (int a, int b, int c, std::string f)
{
	std::cout << std::setw (6) << a << "  "
		  << std::setw (6) << b << "  "
		  << std::setw (6) << c << "  "
		                   << f        << '\n';
}
void count ( std::istream& inp, std::string fname ) 
{	
	char ch, prev = '\n';
	int ch_cnt = 0, nl_cnt = 0, wd_cnt = 0 ;

	inp >> std::noskipws;
	while (inp >> ch)
	{
		++ch_cnt;
		if ( '\n' == ch) ++nl_cnt;
		if (std::isspace(prev) && ! std::isspace(ch)) ++wd_cnt;
		prev=ch;
	}
	nl_total += nl_cnt;
	wd_total += wd_cnt;
	ch_total += ch_cnt;
	niceout (nl_cnt, wd_cnt, ch_cnt, fname);
}
