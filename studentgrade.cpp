#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
		
	    cin>>n>>k;
	    int r=n-k;
	    for(int i=r;i<=n;i++){
	        cout<<i<<" ";
	    }
	    for(int i=1;i<r;i++){
	        cout<<i<<" ";
	    }
	}
	return 0;
}
