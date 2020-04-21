#include <iostream>

using namespace std;

int main ()
{
	
	//here the sum of the squares of the first 100 numbers:
	int x = 1 , squarex = 0 , result = 0;
	
	for ( int i = 1 ; i <= 100 ; i++ )
	{
		squarex = (x * x) + squarex;
		x++;
	}
	
	cout << squarex << endl;
	
	//here is the square of the sum of the first 100 numbers:
	int y = 1 , squarey = 0 , sumy;
	
	for ( int i = 1; i <= 100; i++)
	{
		sumy = y + sumy;
		y++;
	}
	
	squarey = ( sumy * sumy);
	
	cout << squarey << endl;
	
	//here is the difference between them:
	result = squarey - squarex;
	
	cout << result;
	
}


