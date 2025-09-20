#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, q;
    std::cin >> n >> q;
    std::vector<ll> a(n, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll mx = a[n - 1], mxt = 0;
    std::vector<int> arr(mx, 0);
    for (ll i = 0; i < mx; i++) {
        ll x = i;
        int cnt = 0;
        for (int j = n - 2; j >= 0; j--) {
            cnt += x / a[j];
            x %= a[j];
        }
        arr[cnt]++;
        mxt = std::max(mxt, i);
    }

    std::vector<ll> pref(mxt + 1, 0);
    pref[0] = arr[0];
    for (int i = 1; i <= mxt; i++) {
        pref[i] = pref[i - 1] + arr[i];
    }

    while (q--) {
        ll m; 
        std::cin >> m;
        m = std::min(m, mxt);
        std::cout << pref[m] << ' ';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();

}
