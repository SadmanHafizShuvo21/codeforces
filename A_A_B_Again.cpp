#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::cout << n / 10 + n % 10 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}
