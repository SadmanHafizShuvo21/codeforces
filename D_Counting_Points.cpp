#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;

    std::vector<std::pair<ll, ll>> a(n);
    for(int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a[i].first = x;
    }
    for(int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a[i].second = x;
    }

    // for(int i = 0; i < n; i++) {
    //     std::cout << a[i].first << " " << a[i].second << "\n";
    // }

    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        ll mxn = a[i].first + a[i].second;
        ll mnn = a[i].first - a[i].second;
        for(int j = mnn; j <= mxn; j++) {
            ll sc = a[i].second;
            ll fi = a[i].first;
            ll t = (int)sqrt(sc * sc - (j - fi) * (j - fi));
            t = 2 * t + 1;
            mp[j] = std::max(mp[j], t);
        }
    }

    ll ans = 0;
    for(auto x : mp) {
        ans += x.second;
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
