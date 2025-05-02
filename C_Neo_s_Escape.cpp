#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin>>n;
    std::vector<ll> a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    a.erase(std::unique(a.begin(), a.end()), a.end());
    ll ans = 0;
    for(int i=0;i<a.size();i++){
        if ((i == 0 || a[i] > a[i - 1]) && (i + 1 == a.size() || a[i] > a[i + 1])) {
            ans++;
        }
    }
    std::cout<< ans <<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
