#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> odd, even;
    for (int i = 0; i < n; i++) {
        (a[i] & 1 ? odd : even).push_back(a[i]);
    }

    ll oc = odd.size(), ec = even.size();
    if (oc == 0) {
        for (int i = 1; i <= n; i++) {
            std::cout << 0 << " \n"[i == n];
        }
        return;
    }

    std::sort(odd.rbegin(), odd.rend());
    std::sort(even.rbegin(), even.rend());
    std::vector<ll> pe(ec + 1, 0);
    for (int i = 0; i < ec; i++) {
        pe[i + 1] = pe[i] + even[i];
    }

    ll bo = (oc ? odd[0] : 0);
    for (int i = 1; i <= n; i++) {
        ll l = std::max(0LL, i - oc);
        ll r = std::min(ec, i - 1LL);
        if (l > r) {
            std::cout << 0 << " \n"[i == n];
            continue;
        }
        ll t = r;
        if (((i - t) & 1) == 0) {
            if (t - 1 >= l) {
                t--;
            }
            else {
                std::cout << 0 << " \n"[i == n];
                continue;
            }
        }
        ll ans = bo + pe[t];
        std::cout << ans << " \n"[i == n];
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
    // solve();
}
