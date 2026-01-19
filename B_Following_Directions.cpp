#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    
    ll x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            x++;
        }
        else if (s[i] == 'L') {
            x--;
        }
        else if (s[i] == 'U') {
            y++;
        }
        else {
            y--;
        }

        if (x == y && x == 1) {
            std::cout << "YES" << "\n";
            return;
        }
    }
    
    std::cout << "NO" << "\n";
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
