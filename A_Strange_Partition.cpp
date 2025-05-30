#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n, x;
    std::cin >> n >> x; 
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll sum = std::accumulate(a.begin(), a.end(), 0LL);
    ll min = (sum + x - 1) / x;
    ll max = 0;
    for (int i = 0; i < n; i++) {
        max += (a[i] + x - 1) / x;
    }
    std::cout << min << " " << max << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--) {
        solve();
    }
}


