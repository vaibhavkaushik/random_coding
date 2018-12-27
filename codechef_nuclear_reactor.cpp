#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long a,n,k;
	cin>>a>>n>>k;
	
	long long base = n + 1;
	long long number = a;
	long long digits = k;
	
	while(k--)
	{	cout<<number%base<<" ";
		number/=base;
	}



	return 0;
}
