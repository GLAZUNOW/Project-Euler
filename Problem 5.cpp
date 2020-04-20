#include <iostream> 
#include <algorithm>
 
using namespace std; 

long long lcm(int n) 
{ 
    long long ans = 1; 
	 
    for (long long i = 1; i <= n; i++) 
    {
    	ans = (ans * i)/(__gcd(ans, i)); 
	}
	
    return ans; 
}

int main()  
{
    int n = 20; 
    
    cout << lcm(n); 
} 
