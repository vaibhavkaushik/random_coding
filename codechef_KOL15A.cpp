#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		
		int size = s.size();
		int sum = 0;
		for(int i=0;i<size;i++)
		{
			if((s[i]-'0')<=9)
			sum+=s[i]-'0';
		}
		
		cout<<sum<<endl;
	}

	return 0;
}
