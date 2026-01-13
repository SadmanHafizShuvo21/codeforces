// 12 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
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

    std::vector<ll> pref(n);
    for (int i = 0; i < n - 1; i++) {
        pref[i] = std::abs(a[i + 1] - a[i]);
    }

    std::vector<ll> ans; 
    for (int i = 0; i < n; i++) {
        ll cnt = 0, len = 0;
        for (int j = 0; j < n - 1; j++) {
            if (pref[j] > i) {
                len++;
            }
            else {
                cnt += len * (len + 1) / 2;
                len = 0;
            }
        }
        cnt += len * (len + 1) / 2;
        ans.push_back(cnt);
    }

    for (int i = 0; i < n - 1; i++) {
        std::cout << ans[i] << " \n"[i == n - 2];
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
    // solve();
}
