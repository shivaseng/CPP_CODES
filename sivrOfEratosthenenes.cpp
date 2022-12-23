#include<bits/stdc++.h>
using namespace std;
#define maxN 100005
int prime[maxN];

int main(){

for(int i=0;i<maxN;i++){
    prime[i]=-1;

}
prime[0]=0;
prime[1]=0;
for(int i=2;i<maxN;i++){
    if (prime [i]==-1){
        for (int j=2+i;j<maxN;j+=i){
            prime[j]=0;

        }
    }
}



int q;
cin>>q;
while(q--){
    int  n;
    cin>>n;
    cout<<( prime[n]==-1?"IT IS A PRIME NUMBER":"TI IS NOT A PRIME NUMBER");

}
    return 0;

}