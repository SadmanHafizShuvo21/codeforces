// 27 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll check(std::vector<ll> &a, ll n, ll l, ll r) {
    std::set<ll> st;
    for (int i = 0; i <= n; i++) {
        st.insert(i);
    }

    while (l >= 0 && r < 2 * n && a[l] == a[r]) {
        st.erase(a[l]);
        l--;
        r++;
    }
    return *st.begin();
}
void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        std::cin >> a[i];
    }

    ll x = -1, y = -1;
    for (int i = 0; i < 2 * n; i++) {
        if (a[i] == 0) {
            if (x != -1) {
                y = i;
            }
            else {
                x = i;
            }
        }
    }

    ll ans = std::max({check(a, n, x, x), check(a, n, y, y), check(a, n, (x + y) / 2, (x + y + 1) / 2)});
    std::cout << ans << '\n';
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