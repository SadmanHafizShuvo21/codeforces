#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> a(n), cnt(x);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i] %= x;
        cnt[a[i]]++;
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cnt[a[i]]--;
        ll ai = a[i] % x;
        ll bi = (x - a[i]) % x;
        if(ai * bi % x == 0){
            ans += cnt[bi];
        }
    }
    
    std::cout << ans << "\n";  
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    solve();
}