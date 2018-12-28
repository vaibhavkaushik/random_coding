#include <bits/stdc++.h>
using namespace std;

int main() {
	long t;
	cin>>t;
	while(t--){
	    long n,ans=0,found=0,temp;
	    cin>>n;
	    long a[n];
	    for(long i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(long i=0;i<n;i++){
	        for(long j=i+2;j<n;j++){
	            if(a[j]<a[i]){
	                found++;
	                break;
	            }
	        }
	    }
	    if(found==0)
	        cout<<"YES"<<endl;
	   else
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}
