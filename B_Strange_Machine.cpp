#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n, q;
    std::cin >> n >> q;

    std::string s;
    std::cin >> s;

    while(q--) {
        ll a;
        std::cin >> a;
        if (s.find('B') == -1) {
            std::cout << a << '\n';
            continue;
        }

        ll x = 0;
        while(a) {
            if (s[x % n] == 'A') {
                a--;
            }
            else {
                a /= 2;
            }
            x++;
        }
        std::cout << x << '\n';
    }
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