#include <bits/stdc++.h>
using ll = long long;
const ll N = 2e5 + 5;

void solve() {
    ll n;
    std::cin >> n;
    if (n < 18) {
        std::cout << "Failed" << "\n";
        return;
    }
    
    ll m;
    std::cin >> m;
    std::cout << (n + m >= 60 ? "Passed" : "Failed") << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    solve();
}