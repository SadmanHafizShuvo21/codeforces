#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll max = *std::max_element(a.begin(),a.end());
    ll min = *std::min_element(a.begin(),a.end());
    if (max == min) {
        std::cout << "No" <<"\n";
        return;
    }

    std::cout << "Yes" << "\n";
    for (int i = 0; i < n; i++) {
        if (a[i] == max) {
            std::cout << 1 << " ";
        }
        else {
            std::cout << 2 << " ";
        }
    }
    std::cout << "\n";
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
