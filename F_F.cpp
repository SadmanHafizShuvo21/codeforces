#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::set<int> lit;
    for (int i = 0; i < n; i++) {
        int x; 
        std::cin >> x;
        for (int j = 0; j < x; j++) {
            int y; 
            std::cin >> y;
            lit.insert(y);
        }
    }
    std::cout << (lit.size() == m ? "YES\n" : "NO\n");
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
