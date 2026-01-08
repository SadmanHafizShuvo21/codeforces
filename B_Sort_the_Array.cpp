#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> v = a;
    std::sort(a.begin(), a.end());

    ll l = 0, r = n - 1;
    while(l < n && a[l] == v[l]) {
        l++;
    }
    while(r > 0 && a[r] == v[r]) {
        r--;
    }

    if (l >= r) {
        std::cout << "yes" << "\n";
        std::cout << 1 << " " << 1 << "\n";
        return;
    }

    std::reverse(a.begin() + l, a.begin() + r + 1);

    if (a != v) {
        std::cout << "no" << "\n";
        return;
    }

    std::cout << "yes" << "\n";
    std::cout << l + 1 << " " << r + 1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}