//10 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,q;
    std::cin>>n>>q;
    std::vector<std::vector<int>> adj(n);
    for (int i = 1; i < n; i++) {
        int u, v;
        std::cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    std::vector<int> p(n, -1), dep(n);
    auto dfs = [&](this auto &&self, int x) -> void {
        for (auto y : adj[x]) {
            if (y == p[x]) {
                continue;
            }
            p[y] = x;
            dep[y] = dep[x] + 1;
            self(y);
        }
    };
    dfs(0);
    
    for (int i = 0; i < q; i++) {
        int v, c;
        std::cin >> v >> c;
        v--;
        
        int ans = dep[v];
        std::vector<int> cnt(n);
        for (int x = p[v]; x > 0; x = p[p[x]]) {
            cnt[adj[x].size()]++;
            ans += 2 * (adj[x].size() - 1);
        }
        for (int d = n - 1; d > 0; d--) {
            while (cnt[d] > 0 && c > 0) {
                cnt[d]--;
                c--;
                ans -= 2 * (d - 1);
            }
        }
        std::cout << ans << "\n";
    }

}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}



