#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    std::string s;
    std::cin >> s;
    
    ll ans = 0;
    for (int i = 0; i < 6; i++) {
        ans += (i > 2 ? -s[i] : s[i]);
    }
    std::cout << (ans == 0 ? "YES" : "NO") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
//     solve();
}