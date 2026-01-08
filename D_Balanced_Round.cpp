#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    
    ll cnt = 0, l = 0;
    for (int i = 0; i < n; i++) {
        l++;
        if (i == n - 1 || a[i + 1] - a[i] > k) {
            cnt = std::max(cnt, l);
            l = 0;
        }  
    }
    std::cout << n - cnt << "\n";
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