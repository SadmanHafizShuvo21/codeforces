#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
void solve() {
    ll n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        a[i].first = x;
        a[i].second = i + 1;
    }

    std::sort(a.begin(), a.end());
    for (auto p : a) {
        std::cout << p.second << " ";
    }
    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}