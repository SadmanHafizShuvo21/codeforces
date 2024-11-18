#include<bits/stdc++.h>
using ll = long long;
std::vector<int>v[10000];
int vis[10003];
int dis[10005];
//DFS
void DFS(int node, int d){
    vis[node]=1;
    dis[node]=d;
    for(int child: v[node] ){
        if(vis[child]==0){
            DFS(child,d+1);   
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
    int z;
    std::cin>>z;
    int cnt=0;
    DFS(z,0);

    for(int i=1;i<=n;i++){
        std::cout<<z<<" -> "<<i<<" = "<<dis[i]<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}


