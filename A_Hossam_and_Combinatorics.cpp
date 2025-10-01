#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());

    ll mn = a[0];
    ll mx = a[n - 1];
    ll mnc = std::count(a.begin(), a.end(), mn);
    ll mxc = std::count(a.begin(), a.end(), mx);
    
    std::cout << (mn == mx ? (1LL * n * (n - 1)) : (2 * mnc * mxc)) << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
}

