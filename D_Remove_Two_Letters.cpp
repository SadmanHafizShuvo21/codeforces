#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    
    ll ans = 1;
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == s[i + 2]) {
            ans++;
        }
    }
    std::cout << n - ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
