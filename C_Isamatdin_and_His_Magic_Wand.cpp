#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    ll cnt = 0;  
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];

        cnt += (a[i] % 2);
    }
    // std::cout << cnt << "\n";

    if (cnt != n && cnt != 0) {  
        std::sort(a.begin(), a.end());
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " \n"[i == n - 1];
    }
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