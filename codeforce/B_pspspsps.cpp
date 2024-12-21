#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

void solve() {
    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    int p = s.find('p');
    if (p == -1) {
        std::cout << "YES\n";
        return;
    }
    if (s.find('s', p) != -1) {
        std::cout << "NO\n";
        return;
    }
    if (p < n - 1 && p > 0 && std::count(s.begin() + 1, s.begin() + p, 's') > 0) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
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
    
    return 0;
}