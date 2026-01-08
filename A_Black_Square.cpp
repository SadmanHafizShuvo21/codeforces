#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::string s;
    std::cin >> s;

    ll ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans += (s[i] == '1' ? a : (s[i] == '2' ? b : (s[i] == '3' ? c : d)));
    }
    std::cout << ans << "\n";   
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}
