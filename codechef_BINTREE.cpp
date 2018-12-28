#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	
	while(t--)
	{
		int i,j;
		cin>>i>>j;
		vector<int> i_path,j_path;
		
		while(i)
		{
			i_path.push_back(i);
			if(i&1)
			i=(i-1)/2;
			else
			i/=2;
		}
		
		while(j)
		{
			j_path.push_back(j);
			if(j&1)
			j=(j-1)/2;
			else
			j/=2;
		}
		
		int i_path_size = i_path.size(), j_path_size = j_path.size();
		int ans=0,found=0;
		
		for(int i=0;i<i_path_size;i++)
			{	
				for(int j=0;j<j_path_size;j++)
				{
					if(i_path[i]==j_path[j])
					{
						ans = i + j;
						found=1;
						break;
					}
				}
				if(found)
				break;
			}
		
		cout<<ans<<endl;
	}
	return 0;
}
