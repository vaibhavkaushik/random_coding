#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long n;
	scanf("%lld",&n);
	
	while(n--)
	{
		long long size;
		scanf("%lld",&size);
		
		int *arr = new int[size];
		
		for(int i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		int min = arr[0],count=1;
		
		for(int i=1;i<size;i++)
		{
			if(arr[i]<=min)
			{
				count++;
				min=arr[i];
			}
		}		
		cout<<count<<endl;
	}

	return 0;
}
