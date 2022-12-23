#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100001
int spf[MAX_SIZE];
vector <int> getPrimeFactorization(int n){
vector <int> ans;
while()
}

int main(){
    int t;
    for(int i=0; i<MAX_SIZE;i++){
        spf[i]=i;
    }
    for(int i=2; i<MAX_SIZE;i++){
        if(spf[i]==i{
            for(int j=2*i;j<MAX_SIZE;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    } 
    while (t--){
        int n ;
        cin>>n;
        vector<int> primeFactor=getPrimeFattorization(n);

    }
}