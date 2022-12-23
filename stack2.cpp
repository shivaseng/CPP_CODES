#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,5,9,6,7,8,3,4};
    int n=9;
    int ngr[n];
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()&& arr[st.top()]<= arr[i]){
            st.pop();

        }
        ngr[i]=(st.empty()?-1:st.top());
        st.push(i);
        cout<<ngr[i]<<" ";
            
        
    }
}