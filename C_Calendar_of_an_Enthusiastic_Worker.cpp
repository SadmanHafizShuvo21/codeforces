#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n, m;
    while (std::cin >> n >> m && (n != 0 || m != 0)) {
        std::vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        ll q = m / 7;
        ll r = m % 7;
        ll ans = q * 5 + std::min(r, 5LL);

        std::set<ll> arr;
        for (ll x : a) {
            if (x >= 1 && x <= m && arr.insert(x).second) {
                ll mod = (x - 1) % 7; 
                if (mod < 5) {
                    ans--;
                }
            }
        }

        std::cout << ans << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
