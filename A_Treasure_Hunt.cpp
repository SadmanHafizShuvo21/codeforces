#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll x, y, a;
    std::cin >> x >> y >> a;
    double half = a + 0.5;
    ll full_cycles = a / (x + y);
    double remaining = half - full_cycles * (x + y);
    if (remaining > x){
        std::cout << "YES" << "\n";
    }
    else{
        std::cout << "NO" << "\n";
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
