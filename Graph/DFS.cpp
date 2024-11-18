#include<bits/stdc++.h>
using ll = long long;
std::vector<int>v[10000];
int vis[10003];
void DFS(int node){
    vis[node]=1;
    std::cout<<node<<" -> ";
 
    for(int child: v[node] ){
        if(vis[child]==0){
            DFS(child);
        }
    }
}
void solve(){
    int n,m;
    std::cin>>n>>m;
    int x,y;
    while(m--){
        std::cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);   
    }
    DFS(1);
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}


