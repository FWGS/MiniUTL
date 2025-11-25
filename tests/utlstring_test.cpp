#include <iostream>
#include "utlstring.h"

using namespace std;

int main()
{
	CUtlString s;

	// only tests rewritten format methods for now

	s.Format( "foo %d\n", 123 );

	if( !strcmp( s.String(), "foo 123" ))
		return 1;

	s.AppendFormat( "%d bruh", 321 );

	if( !strcmp( s.String(), "foo 123321 bruh" ))
		return 2;

	return 0;
}
