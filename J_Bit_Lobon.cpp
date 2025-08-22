#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
const int MOD = 1e9 + 7;

ll And(ll l, ll r) {
    ll cnt = 0;
    while (l < r) {
        l >>= 1;
        r >>= 1;
        cnt++;
    }
    return l << cnt;
}

ll Or(ll l, ll r) {
    while(l < r) {
        l |= l + 1;
    }
    return l;
}

ll pref_xor(ll n) {
    if (n < 0) {
        return 0;
    }

    if ((n & 3) == 0) {
        return n;
    }
    else if ((n & 3) == 1) {
        return 1;
    }
    else if ((n & 3) == 2) {
        return n + 1;
    }
    else return 0;
}

ll Xor(ll l, ll r) {
    return pref_xor(r) ^ pref_xor(l - 1);
}

void solve() {
    ll l, r;
    std::cin >> l >> r;
    ll a = And(l, r);
    ll o = Or(l, r);
    ll x = Xor(l, r);
    std::cout << a << " " << o << " " << x << "\n";
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
