#include <bits/stdc++.h>
using ll = long long;

ll ask(ll a) {
    std::cout << "? " << a << '\n';
    std::cout.flush();
    ll res;
    std::cin >> res;
    return res;
}
ll find_x(ll a, ll s) {
    std::vector<ll> div;
    for (ll i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            div.push_back(i);
            if (i != a / i) div.push_back(a / i);
        }
    }

    for (ll g : div) {
        ll num = s * g - g * g;
        if (num % a != 0) continue;
        ll x = num / a;
        if (x > 0) return x;
    }

    return -1;
}

void solve() {
    ll a = 999999937;
    ll f = ask(a);
    ll s = 2 * f;

    ll x = find_x(a, s);
    std::cout << "! " << x << '\n';
    std::cout.flush();
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
