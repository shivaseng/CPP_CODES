#include<bits/stdc++.h>
using namespace std;

template <class K,class V>
class unorderedMap{
    private:
        vector<pair<K,V>>* arr;
        int size=3;
        int unique=0;
        hash<K> myHashFunction;

    public:
        unorderedMap(){
            arr=new vector<pair<K,V>>[3];
        }

        int getHash(K key){
            return myHashFunction(key);
        }

        bool fineDensity(){
            return (size+0.0f)/(unique+0.0f) >= 2.0f;
        }

        void reDistribution(int newSize){
            vector<pair<K,V>>* temp=new vector<pair<K,V>>[newSize];
            swap(temp,arr);
            
            int tempSize=size;
            size=newSize;
            unique=0;

            for(int i=0;i<tempSize;i++){
                for(pair<K,V> p:temp[i]){
                    insert(p.first,p.second);
                }
            }
            delete(temp);
        }

        void insert(K key, V value){
            int index=abs(getHash(key))%size;
            //if it is present...just update the value
            if(isPresent(key)){
               int presentInd=0;
               for(int i=0;i<arr[index].size();i++){
                   if(arr[index][i].first==key){
                       presentInd=i;
                   }
               }
               arr[index][presentInd].second=value;  
               return; 
            }
            arr[index].push_back({key,value});
            unique++;
            
            if(!fineDensity()){
                reDistribution(2*size);
            }
        }

        void remove(K key){
            int index=abs(getHash(key))%size;
            if(!isPresent(key)){
               return; 
            }
            arr[index].erase( arr[index].find({key,get(key)}) );
            unique--;

            if(!fineDensity()){
                reDistribution(size/2);
            }
        }

        V get(K key){
            int index=abs(getHash(key))%size;
            for(pair<K,V> p: arr[index]){
                if(p.first == key){
                    return p.second;
                }
            }
            return -1;
        }

        bool isPresent(K key){
            int index=abs(getHash(key))%size;
            for(pair<K,V> p: arr[index]){
                if(p.first == key){
                    return true;
                }
            }
            return false;
        }

        void display(){
            for(int i=0;i<size;i++){
                cout<<i<<" : ";
                cout<<"lokesh";

                for(pair<K,V> p:arr[i]){
                    cout<<"("<<p.first<<":"<<p.second<<") , ";
                }
                cout<<"\n--------------------------------\n";
            }
        }

        vector<int> displayGreaterK(int k){
            vector<int> ans;
            for(int i=0;i<size;i++){
                for(pair<K,V> p:arr[i]){
                    if(p.second >= k){
                        ans.push_back(p.first);
                    }
                }
            }
            return ans;
        }

};

int main(){
    unorderedMap<int,int> mp;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int item;
        cin>>item;
        if(mp.isPresent(item)){
            mp.insert(item,mp.get(item)+1);;
        }else{
            mp.insert(item,1);
        }
    }

    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        vector<int> sol=mp.displayGreaterK(k);
        sort(sol.begin(),sol.end());
        for(int i: sol){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}