#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::cout << "YES" << "\n";
    if (n == 0) {
        std::cout << 1 << " " << 1 << "\n";
        return;
    }

    if (n == 1) {
        std::cout << 2 << " " << 3 << "\n";
        return;
    }
    if ((n & (n - 1)) == 0) {
        std::cout << (n + 1) << " " << 1 << "\n";
        return;
    }
    
    ll a = n & -n;
    ll b = n ^ a;
    std::cout<< b << " " << a <<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
