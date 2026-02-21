// 20 Feb 2026
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
    std::set<ll> st;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        st.insert(a[i]);
    }

    std::vector<ll> cnt(n + 1);
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            cnt[a[i]]++;
        }
    }

    ll mn = inf;
    for (auto x : st) {
        if (x != a.back()) {
            cnt[x]++;
        }
        mn = std::min(mn, cnt[x]);
    }
    std::cout << mn << "\n";
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
