#include <bits/stdc++.h>
using ll = long long;
const ll inf = 1e9 + 7;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    std::vector<std::vector<int>> v(n + 1);
    for (ll i = 2; i <= n; i++) {
        for (ll j = i; j <= n; j += i) {
            v[j].push_back(i);
        }
    }

    std::vector<int> cnt(n + 1), freq(n + 1);
    freq[0] = n - 1;
    std::set<int> s = {0};

    for (int i = 1; i <= n; i++) {
        for (int d : v[a[i]]) {
            int c = cnt[d];
            if (--freq[c] == 0) {
                s.erase(c);
            }
            if (++freq[c + 1] == 1) {
                s.insert(c + 1);
            }
            cnt[d] = c + 1;
        }
        auto it = s.upper_bound(i - 1);
        std::cout << (it == s.begin() ? 0 : *std::prev(it)) << " \n"[i == n];
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
