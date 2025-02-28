#include <bits/stdc++.h>
using ll = long long;

bool isPerfectSquare(ll x) {
    ll s = std::sqrt(x);
    return (1LL * s * s == x);
}

void solve() {
    ll n;
    std::cin >> n;
    
    ll sum = n*(n+1)/2;
    if(isPerfectSquare(sum)){
        std::cout<<-1<<'\n';
        return;
    }
    std::vector<ll>a(n);
    std::iota(a.begin(),a.end(),1);// store data 1 to n
    // for(int i=0;i<n;i++){
    //     std::cout<<a[i]<<" \n"[i==n-1];
    // }
    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(1LL * i * (i + 1) / 2)) {
            std::swap(a[i], a[i - 1]);
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" \n"[i==n-1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
