#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::string s;
    std::cin >> s;

    ll l = -m, ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ans += (i - l >= m);
            l = i;
        }
    }
    
    std::cout << ans << "\n";
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