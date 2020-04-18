#include <iostream>
#include <cmath>

using namespace std;
 
int main ()
{
	
    long long x = 600851475143;
 
    cout << x << " sayisinin asal carpanlari:";
 
    for (long long i = 2 ; i <= x ; i++)
    {
    	
        if (fmod ( x , i ) == 0)
        {
            cout << i << " ";
            
            x = x / i;
            i--;
        }
        
    }
    
}
