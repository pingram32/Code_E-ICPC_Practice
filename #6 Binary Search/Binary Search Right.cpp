#include <iostream>

using namespace std;

int main(){
	//your code here
	int n, q;
	cin>>n>>q;
	int a[n];
	
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	
	while(q--){
	    int l=0,r=n-1;
	    int x,ans=-1;
	    cin>>x;
	    
	    while(l<=r){
	        int m=(l+r)/2;
	        if(a[m]<=x){
	            ans=m; 
	            l=m+1;
	        }
	        else{
	            r=m-1;
	        }
	    }
	    cout<<ans+1<<endl;
	}
	return 0;
}
