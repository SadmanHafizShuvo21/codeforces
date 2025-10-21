#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll ans = 0;
    std::vector<ll> cnt(x);
    for (int i = 0; i < n; i++) {
        ll sum = (x - (a[i] % x)) % x;
        if(sum * a[i] % x == 0){
            ans += cnt[sum];
        }
        cnt[a[i] % x]++;
    }
    
    std::cout << ans << "\n";  
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    solve();
}