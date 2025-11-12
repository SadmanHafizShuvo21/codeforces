#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    while (std::cin >> n && n != 0) {
        std::string s;
        std::cin >> s;

        ll l = 0;
        for (int i = n - 1; i > 0; i--) {
            if (s.substr(0, i) == s.substr(n - i)) {
                l = i;
                break;
            }
        }

        std::cout << s + s.substr(l) << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
