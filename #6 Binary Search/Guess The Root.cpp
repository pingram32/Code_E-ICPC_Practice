#include <iostream>

using namespace std;

int main(){
	//your code here
	int q;
	cin>>q;
	while(q--){
	    int n;
	    cin>>n;
	    
	    int l=1, r=1e4,ans=-1;
	    while(l<=r){
	        int m=(l+r)/2;
	        if(m*m <= n){
	            ans=m;
	            l=m+1;
	        }
	        else{
	            r=m-1;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
