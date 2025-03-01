#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n,st,en;
    std::cin>>n>>st>>en;
    st--;
    en--;
    std::vector<std::vector<int>>adj(n);
    for(int i=1;i<n;i++){
        int u,v;
        std::cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    std::vector<int> q;
    q.push_back(en);
    std::vector<bool> vis(n);
    vis[en] = true;
    for(int i=0;i<n;i++){
        int x=q[i];
        for(auto y : adj[x]){
            if(!vis[y]){
                vis[y] = true;
                q.push_back(y);
            }
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<q[i]+1<<" \n"[i==n-1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}