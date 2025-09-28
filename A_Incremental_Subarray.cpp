#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n, m;
    std::cin >> n >> m;
    std::vector<ll> a(m);
    for (int i = 0; i < m; i++) {
        std::cin >> a[i];
    }

    auto ok = std::find(a.begin() + 1, a.end(), 1);
    std::cout << (ok != a.end() ? 1 : n - a[m - 1] + 1) << '\n';
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}
