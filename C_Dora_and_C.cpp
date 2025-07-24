#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, a, b;
    std::cin >> n >> a >> b;
    std::vector<ll> v(n);

    ll g = std::gcd(a, b);
    for(int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        v[i] = (x % g);
    }

    std::sort(v.begin(), v.end());

    ll range = v[n - 1] - v[0];
    for (int i = 1; i < n; i++) {
        range = std::min(range, v[i - 1] + g - v[i]);
    }

    std::cout << range << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}