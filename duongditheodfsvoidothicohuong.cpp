#include<bits/stdc++.h>
using namespace std;
        int v,e,n,m;
vector<int> dinh[2005];
int parent[2005];
bool visited[2005];
void chuyen(){
for(int i=0;i<e;i++){
        int x,y; cin >> x >> y;
        dinh[x].push_back(y);
}
memset(visited,false,sizeof(visited));
memset(parent,0,sizeof(parent));
}
void dfs(int u,int v){
    visited[u] = true;
    if(visited[v]) return;
    for(auto i : dinh[u]){
        if(!visited[i]){
            parent[i]=u;
            dfs(i,v);
        }
    }
}
void trace(int u,int v){
    if(!visited[v] || v==0){
        cout << "-1\n";
    }
    else {
    vector<int> path;
    while(u!=v){
        path.push_back(v);
        v=parent[v];
    } 
    path.push_back(v);
    reverse(path.begin(),path.end());

    for(auto it : path){
        cout << it<<" ";
    }
cout << endl;
}
}
int main (){
    int t;
     cin >> t;
     while(t--){
        for(int i=0;i<2005;i++){
        dinh[i].clear();
        }
        cin >> v>> e>> n>> m;
        chuyen();
        dfs(n,m);
        trace(n,m);
     }
}