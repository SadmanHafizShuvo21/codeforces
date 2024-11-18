#include<bits/stdc++.h>
using ll = long long;
std::vector<int>v[10000];
int vis[100005];
int dis[100005];
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
    std::cin>>n;
    int x,y;
    m=n-1;
    // Graph input
    while(m--){
        std::cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);   
    }
    DFS(1,0);

    int q;
    std::cin>>q;
    int ans = -1;
    int mn=INT_MAX;
    while(q--){
        int a;
        std::cin>>a;
        if(dis[a]<mn){
            mn=dis[a];
            ans=a;
        }
        else if(dis[a]==mn){
            ans = std::min(ans,a);
        }
    }
    std::cout<<ans<<"\n";;
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}


