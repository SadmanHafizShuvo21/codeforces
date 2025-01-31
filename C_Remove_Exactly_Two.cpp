#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> deg(n, 0);
    vector<vector<int>> adj(n);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--; 
        deg[u]++, deg[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int max_components = 0;
    vector<int> sorted_deg = deg;
    sort(sorted_deg.begin(), sorted_deg.end());

    for (int i = 0; i < n; i++) {
        int ans = deg[i];
        vector<int> ideg;

        for (int v : adj[i]) {
            ideg.push_back(deg[v]);
        }
        ideg.push_back(deg[i]);

        sort(ideg.rbegin(), ideg.rend()); 

        vector<int> removed;
        int mx = -1;

        for (int d : ideg) {
            if (!sorted_deg.empty() && sorted_deg.back() == d) {
                sorted_deg.pop_back();
                removed.push_back(d);
            }
        }

        reverse(removed.begin(), removed.end());

        if (!sorted_deg.empty()) {
            mx = max(mx, sorted_deg.back());
        }

        for (int v : adj[i]) {
            mx = max(mx, deg[v] - 1);
        }

        for (int d : removed) {
            sorted_deg.push_back(d);
        }

        max_components = max(ans + mx - 1, max_components);
    }

    cout << max_components << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
