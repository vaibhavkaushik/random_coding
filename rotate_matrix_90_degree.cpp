#include <bits/stdc++.h>
using namespace std;
 
void my_swap(int i, int j, int (&arr)[100][100])
{
	arr[i][j] = arr[i][j]^arr[j][i];
					arr[j][i] = arr[i][j]^arr[j][i];
					arr[i][j] = arr[i][j]^arr[j][i];
}
 
int main() 
{
	int n;
	cin>>n;
 
	int arr[100][100];
 
	for(int i=0;i<n;i++)
		{	for(int j=0;j<n;j++)
			{	cin>>arr[i][j];
			}
		}
 
 
	for(int i=0;i<n;i++)
		{	for(int j=0;j<n;j++)
				{	cout<<arr[i][j]<<" ";
				}
			cout<<endl;
		}
 
	for(int i=0;i<n;i++)
		{	for(int j=i;j<n;j++)
			{	if(i!=j)
				{
					//cout<<arr[i][j]<<" "<<arr[j][i];
					swap(arr[i][j],arr[j][i]);
				}
			}
		}
 
	int size = n-1;	
	for(int i=0;i<n/2;i++)
		{	for(int j=0;j<n;j++)
			{		//cout<<arr[i][j]<<" "<<arr[j][i];
					swap(arr[i][j],arr[size][j]);
			}
			size--; 
		}
 
 
	cout<<"After 90 degree rotation"<<endl;
	for(int i=0;i<n;i++)
		{	for(int j=0;j<n;j++)
				{	cout<<arr[i][j]<<" ";
				}
			cout<<endl;
		}	
 
 
 
	return 0;
}
