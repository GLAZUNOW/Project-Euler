#include <iostream>

using namespace std;

int main ()
{
	
	//burada ilk 100 say�n�n karelerinin toplam� 
	int x = 1 , karex = 0 , sonuc = 0;
	
	for ( int i = 1 ; i <= 100 ; i++ )
	{
		karex = (x * x) + karex;
		x++;
	}
	
	cout << karex << endl;
	
	//burada ilk 100 say�n�n toplamlar�n�n karesi
	int y = 1 , karey = 0 , toplamy;
	
	for ( int i = 1; i <= 100; i++)
	{
		toplamy = y + toplamy;
		y++;
	}
	
	karey = ( toplamy * toplamy);
	
	cout << karey << endl;
	
	//burada ise aralar�ndaki fark
	sonuc = karey - karex;
	
	cout << sonuc;
	
}


