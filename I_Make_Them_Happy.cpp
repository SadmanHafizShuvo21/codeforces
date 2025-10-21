#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, x;
    std::cin >> n >> x;
    std::vector<ll> freq(x);
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        ll r = a % x;
        freq[r]++;
    }

    ll ans = 0;
    for (int i = 0; i < x; i++) {
        ll sq = (i * i) % x;
        if (sq != 0) {
            continue;
        }

        ll neg = (x - i) % x;
        if(i < neg) {
            ans += freq[i] * freq[neg];
        } 
        else if(i == neg) {
            ans += freq[i] * (freq[i] - 1) / 2;
        }
    }

    std::cout << ans << "\n";  
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    solve();
}