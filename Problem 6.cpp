#include <iostream>

using namespace std;

int main ()
{
	
	//burada ilk 100 say�n�n karelerinin toplam� 
	int x = 1 , squarex = 0 , result = 0;
	
	for ( int i = 1 ; i <= 100 ; i++ )
	{
		squarex = (x * x) + squarex;
		x++;
	}
	
	cout << squarex << endl;
	
	//burada ilk 100 say�n�n toplamlar�n�n karesi
	int y = 1 , squarey = 0 , sumy;
	
	for ( int i = 1; i <= 100; i++)
	{
		sumy = y + sumy;
		y++;
	}
	
	squarey = ( sumy * sumy);
	
	cout << squarey << endl;
	
	//burada ise aralar�ndaki fark
	result = squarey - squarex;
	
	cout << result;
	
}


