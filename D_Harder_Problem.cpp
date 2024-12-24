#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i]--;
    }
    
    std::vector<bool> vis(n, false);
    int cur = 0;

    for (int i = 0; i < n; i++) {
        if (!vis[a[i]]) {
            b[i] = a[i];
        } 
        else {
            while (vis[cur]) {
                cur++;
            }
            b[i] = cur;
        }
        vis[b[i]] = true;
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << b[i] + 1 << " \n"[i == n - 1]; 
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
