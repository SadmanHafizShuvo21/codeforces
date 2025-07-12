#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n), v;

    ll odd = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] % 2) {
            odd++;
            v.push_back(a[i]);
        }
    }

    if (odd == 0) {
        std::cout << 0 << "\n";
        return;
    }

    std::sort(v.begin(), v.end());
    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    std::cout << (odd % 2 ? sum : sum - v[0]) << "\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
