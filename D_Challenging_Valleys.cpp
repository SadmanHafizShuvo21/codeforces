#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll r = n - 1;
    while(a[r] >= a[r - 1] && r > 0) {
        r--;
    }
    
    for (int i = 0; i < r; i++) {
        if (a[i] < a[i + 1]) {
            std::cout << "NO" << "\n";
            return;
        }
    }
    std::cout << "YES" << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
