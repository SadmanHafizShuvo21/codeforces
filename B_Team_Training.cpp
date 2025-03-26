#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::sort(a.rbegin(), a.rend()); 
    
    ll ans = 0, count = 0, inf = INT_MAX;
    for (int i = 0; i < n; ++i) {
        inf = std::min(inf, a[i]);
        count++;
        if (count * inf >= x) {
            ans++;
            count = 0;
            inf = INT_MAX;
        }
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
