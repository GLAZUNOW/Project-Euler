#include <iostream>

using namespace std;

int main ()
{
	
	int x;
	
	for ( int i = 1 ; i < 1000 ; i++ )
	{
		if ( i % 3 == 0 || i % 5 == 0 )
		{
			x += i;
		}
	}
	
	cout << x << endl;
	
}
