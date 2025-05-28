#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    if (n == 0) {
        std::cout << "-1" << "\n";
        return;
    }
    if (n == 1) {
        std::cout << "1" << "\n";
        return;
    }
    std::vector<int> a;
    for (int i = 9; i >= 2; i--) {
        while (n % i == 0) {
            a.push_back(i);
            n /= i;
        }
    }
    
    if (n != 1) {
        std::cout << "-1" << "\n";
        return;
    }
    std::sort(a.begin(), a.end());
    ll ans = 0;
    for (int arr : a) {
        ans = ans * 10 + arr;
    }
    std::cout << ans << "\n";
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