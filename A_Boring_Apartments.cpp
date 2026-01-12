#include<bits/stdc++.h>
using ll = long long;
using lld = double;
const ll inf = 1e18;

void solve() {
    std::string s;
    std::cin >> s;

    ll n = s.size(), sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (i + 1);
    }
    ll ans = 10 * (s[0] - '0' - 1);
    std::cout << ans + sum << "\n";   
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}