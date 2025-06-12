#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::set<ll> s;

    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        s.insert(a);
    }
    
    if (s.size() < 2) {
        std::cout << "NO" << "\n";
        return;
    }
    std::cout << *std::next(s.begin()) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}  