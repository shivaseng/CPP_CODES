#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,8,1,6,4,3};
    int n=7;
    int ngr[n];
    for(int i=0;i<n;i++){
        int next_greater_right=n;
        for(int j=i+1;j<n;j++){

            if(arr[j]>arr[i]){
            next_greater_right =j;
            break;

            }
            
        }
    ngr[i]=next_greater_right;
    cout<<ngr[i]<<" ";

    }
    

}