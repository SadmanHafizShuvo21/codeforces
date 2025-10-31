#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

ll calc(std::vector<ll>& a) {
    int n = a.size();
    std::vector<ll> p(n), s(n);
    
    p[0] = a[0];
    for(int i = 1; i < n; i++) {
        p[i] = p[i - 1] & a[i];
    }
    
    s[n - 1] = a[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        s[i] = s[i + 1] & a[i];
    }
    
    ll r = 0;
    for(int i = 0; i < n - 1; i++) {
        r = std::max(r, p[i] + s[i + 1]);
    }
    return r;
}

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = calc(a);
    ll lim = std::min(n, 6LL);
    
    for(int i = 0; i < lim; i++) {
        for(int j = std::max(0LL, n - lim); j < n; j++) {
            if(i == j) {
                continue;
            }
            std::swap(a[i], a[j]);
            ans = std::max(ans, calc(a));
            std::swap(a[i], a[j]);
        }
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    // solve();
}