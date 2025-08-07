#include <bits/stdc++.h>
using ll = long long;

void get(std::vector<std::pair<ll, ll>> &v, ll n, ll m) {
    while (n--) {
        ll x, cnt = 1;
        std::cin >> x;
        while (x % m == 0) {
            x /= m;
            cnt *= m;
        }

        if (v.empty() || v.back().first != x) {
            v.push_back({x, cnt});
        }
        else {
            v.back().second += cnt;
        }
    }
}

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::pair<ll, ll>> a(n), b(n);
    get(a, n, m);

    ll k;
    std::cin >> k;
    get(b, k, m);

    std::cout << (a == b ? "Yes" : "No") << "\n";
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
