#include <iostream>

using namespace std;

int main ()
{
	
	long sayac1 = 0 , sayac2 = 0;
	
	for ( long i = 2; i <= 1000000; i++ )
	{
		sayac1 = 0;
		
		for ( long j = 2 ; j < i ; j++ )
		{
			if ( i % j == 0)
			{
				sayac1++;
			}				
		}
		
		if ( sayac1 == 0)
		{
			sayac2++;
			
			if(sayac2 == 10001)
			cout << sayac2 << ".Asal Sayi= " << i << endl;	
		}
	}
	
}
