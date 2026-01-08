#include<bits/stdc++.h>
using ll = long long;

void solve() {
    std::vector<ll> a(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    std::cout << (a[1] + a[2] >= 10 ? "YES" : "NO") << "\n";
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