#include<bits/stdc++.h>
using ll = long long;
std::vector<int>v[10000];
int vis[100005];
int dis[100005];
//DFS
bool dfs(int node,int par){
    vis[node]=1;
    for(int child: v[node]){
        if(vis[child]==0){
            if(dfs(child,node)==true){
                return true;
            }
        }
        else{
            if(child!=par){
                return true;
            }
        }
    }
    return false;
}

void solve(){
    int n,m;
    std::cin>>n>>m;
    int x,y;

    // Graph input
    while(m--){
        std::cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);   
    }
    bool ans = dfs(1,-1);
    if(ans==true){
        std::cout<<"Cycle"<<"\n";
    }
    else {
        std::cout<<"NOt cycle"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}


