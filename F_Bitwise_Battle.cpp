#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    ll odd = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if(a[i] & 1) {
            odd++;
        }
    }

    ll ans = *std::max_element(a.begin(), a.end());
    ll avg = (n + 1) / 2;
    std::cout << ((avg > odd) ? -1 : ans) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}