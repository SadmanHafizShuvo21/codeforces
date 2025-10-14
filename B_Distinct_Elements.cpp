#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll N = 1e7 + 6;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n + 1, 0), b(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        std::cin >> b[i];
    }
    
    ll j = 0;
    for (int i = 1; i <= n; i++) {
        ll x = b[i] - b[i - 1];
        if (x == i) {
            j++;
            a[i] = j;
        }
        else {
            a[i] = a[i - x];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        std::cout << a[i] << " \n"[i == n];
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