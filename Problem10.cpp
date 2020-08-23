#include <iostream>
#include <string.h>

void SieveOfEratosthenes(int n) 
{
	bool prime[n+1];
    long long int sum=0;
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p] == true) 
		{ 
			for (int i=p*2; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 
	for (int p=2; p<=n; p++) 
        if (prime[p]) 
            sum+=p;
     std::cout<<sum<<'\n';
        
} 

int main() 
{ 
	int n = 2000000; 
	SieveOfEratosthenes(n); 
	return 0; 
} 
