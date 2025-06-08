#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, x;
    std::cin >> n >> x;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    int l = 0, r = n - 1;
    while (l < n && !a[l]) {
        l++;
    }
    while (r >= 0 && !a[r]) {
        r--;
    }
        
    std::cout << (r - l + 1 <= x ? "YES" : "NO") << '\n';
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