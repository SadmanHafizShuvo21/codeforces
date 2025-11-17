#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    if (n == 0) {
        std::cout << 0 << "\n";
        return;
    }

    ll cnt = 0, temp = n;
    while (temp > 0) {
        cnt++;
        temp >>= 7;
    }

    std::vector<ll> a;
    for (int i = 0; i < cnt; i++) {
        ll shift = 7 * (cnt - 1 - i);
        ll x = (n >> shift) & 0x7F;

        if (i < cnt - 1) {
            x |= 0x80;
        }
        a.push_back(x);
    }
    
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " \n"[i == a.size() - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}