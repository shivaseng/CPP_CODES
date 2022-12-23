//0(n+n(for deletion)) time complaxity
//next greater to the right
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     int arr[]={5,6,4,3,5,2,5};
     int n=7;
     int ngr[n];
     stack<int> st;
     for(int i=n-1;i>=0;i--){
         if(i==n-1){
             ngr[i]=n;
             continue;
         }
         while(!st.empty() && arr[st.top()]<=arr[i]){
             st.pop();

         }
         ngr[i]=(st.empty()?n:st.top());
         st.push(i);
         cout<<ngr[i]<<" ";

     }

 }