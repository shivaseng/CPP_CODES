#include<bits/stdc++.h>
using namespace std;

int getMiniNotInMST(int dist[],bool mst[],int n){
    int mini_index=0,mini_val=INT_MAX;

    for(int i=0;i<n;i++){
        if(mst[i]==false && dist[i] < mini_val){
            mini_val=dist[i];
            mini_index=i;
        }
    }

    return mini_index;
}

void prims(vector<pair<int,int>> adj[],int n){
    int dist[n];
    bool mst[n];
    int parent[n];

    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
        mst[i]=false;
        parent[i]=-1;
    }

    dist[1]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,1});


    while(!pq.empty()){
        pair<int,int> x=pq.top();
        pq.pop();
        int cur=x.second;
        int cost=x.first;

        if(mst[cur]){
            continue;
        }
        mst[cur]=true;

        for(pair<int,int> p: adj[cur]){
            int nbr=p.first;
            int edge=p.second;

            if(mst[nbr]==false && edge < dist[nbr]){
                dist[nbr]=edge;
                parent[nbr]=cur;
                pq.push({dist[nbr],nbr});
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<"node :"<<i<<" has parent: "<<parent[i]<<"\n";
    }
    cout<<"\n";
}

int main(){
    int n,e;
    cout<<"Enter the number of nodes and edges in your graph:\n";
    cin>>n>>e;
    vector<pair<int,int>> adj[n];

    cout<<"Enter the edges of your graph\n";
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    prims(adj,n);
    return 0;
}