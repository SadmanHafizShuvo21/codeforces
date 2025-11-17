#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll error = 1e-6;

void solve() {
    ll n;
    std::cin >> n;
    if (n == 0) {
        std::cout << 0 << "\n";
        return;
    }

    std::vector<ll> a;
    while (n > 0) {
        a.push_back(n % 128);
        n /= 128;
    }

    std::reverse(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) {
        std::cout << (i == a.size() - 1 ? a[i] : a[i] + 128) << " \n"[i == a.size() - 1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}