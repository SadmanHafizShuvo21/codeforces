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
    
    ll ans = 0, count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if (count * a[i] *1ll >= x) {
            ans++;
            count = 0;
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
