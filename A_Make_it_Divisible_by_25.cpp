#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    if (n % 25 == 0) {
        std::cout << 0 << '\n';
        return;
    }

    ll ans = 1e18;
    std::string s = std::to_string(n);
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '0' || s[i] == '5') {
            for (int j = i - 1; j >= 0; j--) {
                if ((s[i] == '0' && (s[j] == '0' || s[j] == '5')) || (s[i] == '5' && (s[j] == '2' || s[j] == '7'))) {
                    ans = std::min(ans, (ll)s.size() - j - 2);
                }
            }
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