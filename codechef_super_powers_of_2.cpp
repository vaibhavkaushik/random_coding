#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int convert_bin(char *arr,int num,char *bin)
{
	int index=0;
	
	while(num)
	{
		arr[index] = num%2 + '0';
		num/=2;
		index++;
	}
	
	for(int i=index-1;i>=0;i--)
	{
		bin[(index-1)-i] = arr[i];
	}
	
	return index;
}

unsigned long long convert_num(char *num,int size)
{
	unsigned long long power = num[0]-'0';

	for(int i=1;i<size;i++)
	{
		power = (num[i]-'0') + power*10;
	}
	
	return power;
}

long long modular_expo(long long num,unsigned long long power)
{
	long long val=1;
	int index=0;
	
	while(power)
	{
		if(power&1)
		{
			val = ((val%MOD)*(num%MOD))%MOD;
		}
		
		num=((num%MOD)*(num%MOD))%MOD;
		power>>=1;
		
	}
	
	return val;
}

int main() 
{

	int t;
	cin>>t;
	
	while(t--)
	{
		char arr[32]={'\0'},bin[32]={'\0'};
		int num;
		cin>>num;
		
		int size = convert_bin(arr,num,bin);	
		unsigned long long power = convert_num(bin,size);
		long long ans = modular_expo(2,power);
		cout<<(ans*ans)%MOD<<endl;
	}



	return 0;
}
