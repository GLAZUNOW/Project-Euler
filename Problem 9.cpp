#include <iostream>

using namespace std;

int main ()
{
	int x , y , z;
	
	for ( x = 1 ; x < 1000 ; x++)
		for ( y = 1 ; y < x ; y++)
			for ( z = 1 ; z < 1000 ; z++)
			{
				if ( x * x + y * y == z * z )
					if ( x + y + z == 1000 )
						cout << x << " + " << y << " = " << z << " Multiplying= " << x * y * z << endl;
			}		
}
