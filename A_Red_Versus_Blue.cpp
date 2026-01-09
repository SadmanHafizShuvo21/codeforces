#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n, r, b;
    std::cin >> n >> r >> b;

    ll rem = r;
    std::string s;
    for (int i = 0; i <= b; i++) {
        for (int j = 0; j < rem / (b + 1 - i); j++) {
            s.push_back('R');
        }

        rem -= rem / (b + 1 - i);
        if (i < b) {
            s.push_back('B');
        }
    }
    std::reverse(s.begin(), s.end());
    std::cout << s << "\n";
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
