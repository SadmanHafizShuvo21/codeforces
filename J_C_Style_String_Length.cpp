#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    std::string s;
    std::cin >> s;

    ll n = s.size(), len = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '0') {
            len++;
        } 
        else {
            if (i + 1 >= n) {
                std::cout << "INVALID" << "\n";
                return;
            }
            if (s[i + 1] == '\\') {
                len++;
                i++;
            } 
            else if (s[i + 1] == '0') {
                std::cout << len << "\n";
                return;
            }
        }
    }

    std::cout << len << "\n";
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
