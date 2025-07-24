#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll a, b;
    std::cin >> a >> b;

    if (a == b) {
        std::cout << 0 << " " << 0 << "\n";
        return;
    }
    
    if(b > a) {
        std::swap(a, b);
    }
    ll l = a - b;
    ll r = (a % l);
    std::cout << l << " " << std::min(r, l - r) <<"\n";
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