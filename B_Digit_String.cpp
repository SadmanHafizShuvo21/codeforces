// 18 May 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    std::string s;
    std::cin >> s;

    ll ans = 0, cnt = 0, cnta = 0, mx = 0, n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '2') {
            cnta++;
        } 
        else if (s[i] == '1' || s[i] == '3') {
            cnt++;
        }
        
        ll dif = cnta - cnt;
        mx = std::max(mx, dif);
    }

    std::cout << n - cnt - mx << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}