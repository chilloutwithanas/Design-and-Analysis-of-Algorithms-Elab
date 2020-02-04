#include<bits/stdc++.h> 
using namespace std; 

bool sieve(int n, bool isPrime[]) 
{ 
	isPrime[0] = isPrime[1] = false; 
	for (int i=2; i<=n; i++) 
		isPrime[i] = true; 

	for (int p=2; p*p<=n; p++) 
	{ 
		if (isPrime[p] == true) 
		{ 
			for (int i=p*2; i<=n; i += p) 
				isPrime[i] = false; 
		} 
	} 
} 

int superPrimes(int n) 
{ 
  int count=0;
	bool isPrime[n+1]; 
	sieve(n, isPrime); 
	int primes[n+1], j = 0; 
	for (int p=2; p<=n; p++) 
	if (isPrime[p]) 
		primes[j++] = p; 
	for (int k=0; k<j-1; k++) 
		if (isPrime[k+1]) 
          count++;
  return count;
} 

int main() 
{ 
  	int x,n;
  	cin>>x;
  	for(int i=0; i<x;i++)
    {
      cin>>n;
      cout<<superPrimes(n)<<endl; 
    }
	return 0; 
} 
