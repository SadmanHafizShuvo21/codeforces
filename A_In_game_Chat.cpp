// 03 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s; 
    std::cin >> n >> s;

    ll l = n, r = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ')') {
            l--;
            r++;
        }
        else {
            break;
        }
    }
    std::cout << (r > l ? "Yes" : "No") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}
