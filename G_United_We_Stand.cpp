#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    if (a[0] == a[n - 1]) {
        std::cout << -1 << "\n";
        return;
    }

    std::vector<ll> b, c;
    for (int i = 0; i < n; i++) {
        if (a[n - 1] == a[i]) {
            c.push_back(a[i]);
        }
        else {
            b.push_back(a[i]);
        }
    }

    std::cout << b.size() << " " << c.size() << "\n";
    for (int i = 0; i < b.size(); i++) {
        std::cout << b[i] << " \n"[i == b.size() - 1];
    }

    for (int i = 0; i < c.size(); i++) {
        std::cout << c[i] << " \n"[i == c.size() - 1];
    }
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