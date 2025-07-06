#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if(std::is_sorted(a.begin(), a.end())) {
        std::cout << "NO" << '\n';
        return;
    }
    std::cout << "YES" << '\n';
    std::cout << 2 << '\n';

    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                std::cout << a[i] << ' ' << a[j] << '\n';
                return;
            }
        }
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}