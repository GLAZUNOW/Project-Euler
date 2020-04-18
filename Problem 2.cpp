#include <iostream>

using namespace std;

int main ()
{
	
	long fb1 = 0 , fb2 = 1 , fb3 = 0 , top = 0;
	
	while ( fb3 < 4000000 )
	{
		
		if ( fb3 % 2 == 0 )//1'den 4000000'a kadar olan fibonaci dizisindeki çift sayýlarýn toplamýný bulur.
		top += fb3;
		
		fb3 = fb1 + fb2;
		fb1 = fb2;
		fb2 = fb3;
		
	}
	
	cout << top;
	
}
