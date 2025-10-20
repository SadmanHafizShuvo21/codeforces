#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::map<ll, ll> freq;
    freq[0] = 1; 

    ll x = 0, ans = 0;
    for (int i = 0; i < n; i++) {  
        x += (a[i] % k == 0);
        ll rem = x % k;
        ans += freq[rem];
        freq[rem]++;
    }

    std::cout << ans << "\n";  
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    solve();
}