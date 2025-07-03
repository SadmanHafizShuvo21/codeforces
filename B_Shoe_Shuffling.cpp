#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> b(n);
    std::iota(b.begin(), b.end(), 0);
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && a[i] == a[j]) {
            j++;
        }
        if (j - i == 1) {
            std::cout << "-1" << '\n';
            return;
        }
        std::rotate(b.begin() + i, b.begin() + i + 1, b.begin() + j);;
        i = j;
    }

    for (int i = 0; i < n; i++) {
        std::cout << b[i] + 1 << " \n"[i == n - 1];
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