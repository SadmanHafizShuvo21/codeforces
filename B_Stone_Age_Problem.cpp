#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    ll sum = std::accumulate(v.begin(), v.end(), 0LL);
    std::unordered_map<ll, ll> mp;
    ll g = -1;
    while (m--) {
        ll x;
        std::cin >> x;
        if (x == 2) {
            ll a;
            std::cin >> a;
            g = a;
            sum = a * n;
            mp.clear();
        } 
        else {
            ll a, b;
            std::cin >> a >> b;
            a--;
            ll cur = mp.count(a) ? mp[a] : (g != -1 ? g : v[a]);
            sum += b - cur;
            mp[a] = b;
        }
        std::cout << sum << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
