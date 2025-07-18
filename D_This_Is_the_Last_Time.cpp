#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> l(n), r(n), v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> l[i] >> r[i] >> v[i];
    }

    std::vector<int> ord(n);
    std::iota(ord.begin(), ord.end(), 0);
    std::sort(ord.begin(), ord.end(), [&](int i, int j){
        return v[i] < v[j];
    });

    for (auto i : ord) {
        if (l[i] <= k && k < v[i]) {
            k = v[i];
        }
    }

    std::cout << k << "\n";
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
