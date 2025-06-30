#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }
    
    std::vector<ll> a(m);
    for (int i = 0; i < m; i++) {
        std::cin >> a[i];
    }

    ll ans = 0;
    for (int j = 0; j < m; j++) {
        std::array<ll, 5> cnt = {0};
        for (int i = 0; i < n; i++) {
            ll x = s[i][j] - 'A';
            cnt[x]++;
        }

        ll mx = *std::max_element(cnt.begin(), cnt.end());
        ans += mx * a[j];
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);  
    solve();
}