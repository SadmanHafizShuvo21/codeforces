#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, q, m;
    std::cin >> n >> q >> m;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> diff(n+1, 0);
    while(q--) {
        ll l, r, d;
        std::cin >> l >> r >> d;
        l--; 
        r--;          
        diff[l] += d;
        if (r + 1 < n) {
            diff[r + 1] -= d;
        }
    }

    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += diff[i];
        a[i] += sum;
    }

    std::sort(a.rbegin(), a.rend());
    while(m--) {
        ll k;
        std::cin >> k;
        std::cout << a[k-1] << "\n"; 
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
