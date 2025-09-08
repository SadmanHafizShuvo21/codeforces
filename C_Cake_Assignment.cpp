#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;

void solve() {
    ll k, x; 
    std::cin >> k >> x;

    ll mx = (llx)1 << (k + 1);
    if (2 * x == mx) {
        std::cout << 0 << "\n";
        return;
    }

    std::vector<ll> a;
    while(2 * x != mx) {
        if (2 * x < mx) {
            a.push_back(1);
            x *= 2;
        } 
        else {
            a.push_back(2);
            x = 2 * x  - mx;
        }
    }

    std::reverse(a.begin(), a.end());
    std::cout << a.size() << "\n";
    for (ll i = 0; i < a.size(); i++) {
        std::cout << a[i] << " \n"[i == a.size() - 1];
    }

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
