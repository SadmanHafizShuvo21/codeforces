#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, x;
    std::cin >> n >> x;
    std::set<int> s;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        s.insert(a);
    }
    
   std::cout << ((s.size() == x) ? "Good" :  ((s.size() > x) ? "Average" : "Bad")) << "\n";
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